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

// Function InventoryItemIcon.InventoryItemIcon_C.GetItemNameText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTextBlock*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextBlock* UInventoryItemIcon_C::GetItemNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemIcon.InventoryItemIcon_C.GetItemNameText");

	UInventoryItemIcon_C_GetItemNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryItemIcon.InventoryItemIcon_C.GetIconBackground
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UInventoryItemIcon_C::GetIconBackground()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemIcon.InventoryItemIcon_C.GetIconBackground");

	UInventoryItemIcon_C_GetIconBackground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryItemIcon.InventoryItemIcon_C.GetIconBorder
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLBorder*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLBorder* UInventoryItemIcon_C::GetIconBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemIcon.InventoryItemIcon_C.GetIconBorder");

	UInventoryItemIcon_C_GetIconBorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryItemIcon.InventoryItemIcon_C.GetItemIconImage
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UInventoryItemIcon_C::GetItemIconImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemIcon.InventoryItemIcon_C.GetItemIconImage");

	UInventoryItemIcon_C_GetItemIconImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryItemIcon.InventoryItemIcon_C.GetComparisonMenuAnchor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMenuAnchor*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMenuAnchor* UInventoryItemIcon_C::GetComparisonMenuAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemIcon.InventoryItemIcon_C.GetComparisonMenuAnchor");

	UInventoryItemIcon_C_GetComparisonMenuAnchor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InventoryItemIcon.InventoryItemIcon_C.OnEquippedCosmetic
// (BlueprintCallable, BlueprintEvent)
void UInventoryItemIcon_C::OnEquippedCosmetic()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemIcon.InventoryItemIcon_C.OnEquippedCosmetic");

	UInventoryItemIcon_C_OnEquippedCosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryItemIcon.InventoryItemIcon_C.TryToEquipCosmetic
// (BlueprintCallable, BlueprintEvent)
void UInventoryItemIcon_C::TryToEquipCosmetic()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemIcon.InventoryItemIcon_C.TryToEquipCosmetic");

	UInventoryItemIcon_C_TryToEquipCosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryItemIcon.InventoryItemIcon_C.SetItemVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShowItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInventoryItemIcon_C::SetItemVisibility(bool bShowItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemIcon.InventoryItemIcon_C.SetItemVisibility");

	UInventoryItemIcon_C_SetItemVisibility_Params params;
	params.bShowItem = bShowItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryItemIcon.InventoryItemIcon_C.ExecuteUbergraph_InventoryItemIcon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryItemIcon_C::ExecuteUbergraph_InventoryItemIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemIcon.InventoryItemIcon_C.ExecuteUbergraph_InventoryItemIcon");

	UInventoryItemIcon_C_ExecuteUbergraph_InventoryItemIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
