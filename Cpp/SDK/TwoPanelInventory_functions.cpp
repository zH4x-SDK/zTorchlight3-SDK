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

// Function TwoPanelInventory.TwoPanelInventory_C.OnGetNextListBinding_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UTwoPanelInventory_C::OnGetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwoPanelInventory.TwoPanelInventory_C.OnGetNextListBinding_1");

	UTwoPanelInventory_C_OnGetNextListBinding_1_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwoPanelInventory.TwoPanelInventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTwoPanelInventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwoPanelInventory.TwoPanelInventory_C.Construct");

	UTwoPanelInventory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwoPanelInventory.TwoPanelInventory_C.ExecuteUbergraph_TwoPanelInventory
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTwoPanelInventory_C::ExecuteUbergraph_TwoPanelInventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwoPanelInventory.TwoPanelInventory_C.ExecuteUbergraph_TwoPanelInventory");

	UTwoPanelInventory_C_ExecuteUbergraph_TwoPanelInventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
