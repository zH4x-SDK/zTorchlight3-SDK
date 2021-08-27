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

// Function InventoryEquippedItemWidget.InventoryEquippedItemWidget_C.GetEmptySlotToolTipWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UInventoryEquippedItemWidget_C::GetEmptySlotToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryEquippedItemWidget.InventoryEquippedItemWidget_C.GetEmptySlotToolTipWidget");

	UInventoryEquippedItemWidget_C_GetEmptySlotToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryEquippedItemWidget.InventoryEquippedItemWidget_C.GetSlotBGImage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UInventoryEquippedItemWidget_C::GetSlotBGImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryEquippedItemWidget.InventoryEquippedItemWidget_C.GetSlotBGImage");

	UInventoryEquippedItemWidget_C_GetSlotBGImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryEquippedItemWidget.InventoryEquippedItemWidget_C.GetInventoryItemWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryItemBaseWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryItemBaseWidget* UInventoryEquippedItemWidget_C::GetInventoryItemWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryEquippedItemWidget.InventoryEquippedItemWidget_C.GetInventoryItemWidget");

	UInventoryEquippedItemWidget_C_GetInventoryItemWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryEquippedItemWidget.InventoryEquippedItemWidget_C.GetSlotIconImage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UInventoryEquippedItemWidget_C::GetSlotIconImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryEquippedItemWidget.InventoryEquippedItemWidget_C.GetSlotIconImage");

	UInventoryEquippedItemWidget_C_GetSlotIconImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
