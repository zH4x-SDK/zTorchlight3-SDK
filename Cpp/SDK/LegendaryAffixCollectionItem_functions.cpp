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

// Function LegendaryAffixCollectionItem.LegendaryAffixCollectionItem_C.GetAffixListWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAffixListWidget*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAffixListWidget* ULegendaryAffixCollectionItem_C::GetAffixListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegendaryAffixCollectionItem.LegendaryAffixCollectionItem_C.GetAffixListWidget");

	ULegendaryAffixCollectionItem_C_GetAffixListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LegendaryAffixCollectionItem.LegendaryAffixCollectionItem_C.GetItemWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryItemBaseWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryItemBaseWidget* ULegendaryAffixCollectionItem_C::GetItemWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegendaryAffixCollectionItem.LegendaryAffixCollectionItem_C.GetItemWidget");

	ULegendaryAffixCollectionItem_C_GetItemWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LegendaryAffixCollectionItem.LegendaryAffixCollectionItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULegendaryAffixCollectionItem_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegendaryAffixCollectionItem.LegendaryAffixCollectionItem_C.PreConstruct");

	ULegendaryAffixCollectionItem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LegendaryAffixCollectionItem.LegendaryAffixCollectionItem_C.BlueprintSetup
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FItemData               InItemData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ULegendaryAffixCollectionItem_C::BlueprintSetup(const struct FItemData& InItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegendaryAffixCollectionItem.LegendaryAffixCollectionItem_C.BlueprintSetup");

	ULegendaryAffixCollectionItem_C_BlueprintSetup_Params params;
	params.InItemData = InItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LegendaryAffixCollectionItem.LegendaryAffixCollectionItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void ULegendaryAffixCollectionItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegendaryAffixCollectionItem.LegendaryAffixCollectionItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	ULegendaryAffixCollectionItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LegendaryAffixCollectionItem.LegendaryAffixCollectionItem_C.ExecuteUbergraph_LegendaryAffixCollectionItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULegendaryAffixCollectionItem_C::ExecuteUbergraph_LegendaryAffixCollectionItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegendaryAffixCollectionItem.LegendaryAffixCollectionItem_C.ExecuteUbergraph_LegendaryAffixCollectionItem");

	ULegendaryAffixCollectionItem_C_ExecuteUbergraph_LegendaryAffixCollectionItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
