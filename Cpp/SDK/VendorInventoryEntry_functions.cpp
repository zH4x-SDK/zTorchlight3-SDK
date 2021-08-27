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

// Function VendorInventoryEntry.VendorInventoryEntry_C.GetCatalogEntryWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCatalogEntryWidget*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCatalogEntryWidget* UVendorInventoryEntry_C::GetCatalogEntryWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorInventoryEntry.VendorInventoryEntry_C.GetCatalogEntryWidget");

	UVendorInventoryEntry_C_GetCatalogEntryWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VendorInventoryEntry.VendorInventoryEntry_C.GetComparisonMenuAnchor
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMenuAnchor*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMenuAnchor* UVendorInventoryEntry_C::GetComparisonMenuAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorInventoryEntry.VendorInventoryEntry_C.GetComparisonMenuAnchor");

	UVendorInventoryEntry_C_GetComparisonMenuAnchor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
