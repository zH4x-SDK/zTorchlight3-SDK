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

// Function GenericModalWidgetToast.GenericModalWidgetToast_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UGenericModalWidgetToast_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericModalWidgetToast.GenericModalWidgetToast_C.GetShowAnimation");

	UGenericModalWidgetToast_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GenericModalWidgetToast.GenericModalWidgetToast_C.GetContentPanel
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPanelWidget*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPanelWidget* UGenericModalWidgetToast_C::GetContentPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericModalWidgetToast.GenericModalWidgetToast_C.GetContentPanel");

	UGenericModalWidgetToast_C_GetContentPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GenericModalWidgetToast.GenericModalWidgetToast_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGenericModalWidgetToast_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericModalWidgetToast.GenericModalWidgetToast_C.PreConstruct");

	UGenericModalWidgetToast_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GenericModalWidgetToast.GenericModalWidgetToast_C.ExecuteUbergraph_GenericModalWidgetToast
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGenericModalWidgetToast_C::ExecuteUbergraph_GenericModalWidgetToast(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericModalWidgetToast.GenericModalWidgetToast_C.ExecuteUbergraph_GenericModalWidgetToast");

	UGenericModalWidgetToast_C_ExecuteUbergraph_GenericModalWidgetToast_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
