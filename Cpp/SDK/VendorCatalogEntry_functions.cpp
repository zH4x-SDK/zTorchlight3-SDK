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

// Function VendorCatalogEntry.VendorCatalogEntry_C.GetCostWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGenericResourceWidget*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UGenericResourceWidget* UVendorCatalogEntry_C::GetCostWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorCatalogEntry.VendorCatalogEntry_C.GetCostWidget");

	UVendorCatalogEntry_C_GetCostWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VendorCatalogEntry.VendorCatalogEntry_C.GetIconWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGenericResourceWidget*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UGenericResourceWidget* UVendorCatalogEntry_C::GetIconWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorCatalogEntry.VendorCatalogEntry_C.GetIconWidget");

	UVendorCatalogEntry_C_GetIconWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VendorCatalogEntry.VendorCatalogEntry_C.GetCatalogEntryWidget
// (HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCatalogEntryWidget*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCatalogEntryWidget* UVendorCatalogEntry_C::GetCatalogEntryWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorCatalogEntry.VendorCatalogEntry_C.GetCatalogEntryWidget");

	UVendorCatalogEntry_C_GetCatalogEntryWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VendorCatalogEntry.VendorCatalogEntry_C.GetComparisonMenuAnchor
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMenuAnchor*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMenuAnchor* UVendorCatalogEntry_C::GetComparisonMenuAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorCatalogEntry.VendorCatalogEntry_C.GetComparisonMenuAnchor");

	UVendorCatalogEntry_C_GetComparisonMenuAnchor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
