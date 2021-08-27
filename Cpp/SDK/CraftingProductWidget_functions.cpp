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

// Function CraftingProductWidget.CraftingProductWidget_C.GetDisplayNameText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTextBlock*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextBlock* UCraftingProductWidget_C::GetDisplayNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingProductWidget.CraftingProductWidget_C.GetDisplayNameText");

	UCraftingProductWidget_C_GetDisplayNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CraftingProductWidget.CraftingProductWidget_C.GetResourceWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGenericResourceWidget*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UGenericResourceWidget* UCraftingProductWidget_C::GetResourceWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingProductWidget.CraftingProductWidget_C.GetResourceWidget");

	UCraftingProductWidget_C_GetResourceWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CraftingProductWidget.CraftingProductWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCraftingProductWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingProductWidget.CraftingProductWidget_C.PreConstruct");

	UCraftingProductWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CraftingProductWidget.CraftingProductWidget_C.ExecuteUbergraph_CraftingProductWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCraftingProductWidget_C::ExecuteUbergraph_CraftingProductWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingProductWidget.CraftingProductWidget_C.ExecuteUbergraph_CraftingProductWidget");

	UCraftingProductWidget_C_ExecuteUbergraph_CraftingProductWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
