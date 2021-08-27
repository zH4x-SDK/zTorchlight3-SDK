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

// Function OverlayMapWidget.OverlayMapWidget_C.GetOverlayWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOverlay*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UOverlay* UOverlayMapWidget_C::GetOverlayWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OverlayMapWidget.OverlayMapWidget_C.GetOverlayWidget");

	UOverlayMapWidget_C_GetOverlayWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OverlayMapWidget.OverlayMapWidget_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UOverlayMapWidget_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OverlayMapWidget.OverlayMapWidget_C.GetShowAnimation");

	UOverlayMapWidget_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OverlayMapWidget.OverlayMapWidget_C.GetFadeInAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UOverlayMapWidget_C::GetFadeInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OverlayMapWidget.OverlayMapWidget_C.GetFadeInAnimation");

	UOverlayMapWidget_C_GetFadeInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OverlayMapWidget.OverlayMapWidget_C.GetMapImageWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UImage* UOverlayMapWidget_C::GetMapImageWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OverlayMapWidget.OverlayMapWidget_C.GetMapImageWidget");

	UOverlayMapWidget_C_GetMapImageWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OverlayMapWidget.OverlayMapWidget_C.GetMarkerListWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapMarkerListWidget*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMapMarkerListWidget* UOverlayMapWidget_C::GetMarkerListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OverlayMapWidget.OverlayMapWidget_C.GetMarkerListWidget");

	UOverlayMapWidget_C_GetMarkerListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OverlayMapWidget.OverlayMapWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UOverlayMapWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OverlayMapWidget.OverlayMapWidget_C.Construct");

	UOverlayMapWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OverlayMapWidget.OverlayMapWidget_C.ExecuteUbergraph_OverlayMapWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOverlayMapWidget_C::ExecuteUbergraph_OverlayMapWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OverlayMapWidget.OverlayMapWidget_C.ExecuteUbergraph_OverlayMapWidget");

	UOverlayMapWidget_C_ExecuteUbergraph_OverlayMapWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
