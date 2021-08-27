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

// Function VendorStoreGrid.VendorStoreGrid_C.GetNoItemsWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UVendorStoreGrid_C::GetNoItemsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorStoreGrid.VendorStoreGrid_C.GetNoItemsWidget");

	UVendorStoreGrid_C_GetNoItemsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VendorStoreGrid.VendorStoreGrid_C.GetEntryListWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UOnlineStoreEntryListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UOnlineStoreEntryListWidget* UVendorStoreGrid_C::GetEntryListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorStoreGrid.VendorStoreGrid_C.GetEntryListWidget");

	UVendorStoreGrid_C_GetEntryListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
