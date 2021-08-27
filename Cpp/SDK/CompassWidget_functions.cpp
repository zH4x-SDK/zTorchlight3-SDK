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

// Function CompassWidget.CompassWidget_C.CompassNotFocused
// (Public, BlueprintCallable, BlueprintEvent)
void UCompassWidget_C::CompassNotFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassWidget.CompassWidget_C.CompassNotFocused");

	UCompassWidget_C_CompassNotFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CompassWidget.CompassWidget_C.CompassFocused
// (Public, BlueprintCallable, BlueprintEvent)
void UCompassWidget_C::CompassFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassWidget.CompassWidget_C.CompassFocused");

	UCompassWidget_C_CompassFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CompassWidget.CompassWidget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UCompassWidget_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassWidget.CompassWidget_C.OnFocusReceived");

	UCompassWidget_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CompassWidget.CompassWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UCompassWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassWidget.CompassWidget_C.Construct");

	UCompassWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CompassWidget.CompassWidget_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UCompassWidget_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassWidget.CompassWidget_C.OnFocusLost");

	UCompassWidget_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CompassWidget.CompassWidget_C.BndEvt__Compassbutton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UCompassWidget_C::BndEvt__Compassbutton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassWidget.CompassWidget_C.BndEvt__Compassbutton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UCompassWidget_C_BndEvt__Compassbutton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CompassWidget.CompassWidget_C.PlayCompassAnimation
// (Event, Public, BlueprintEvent)
void UCompassWidget_C::PlayCompassAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassWidget.CompassWidget_C.PlayCompassAnimation");

	UCompassWidget_C_PlayCompassAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CompassWidget.CompassWidget_C.BndEvt__Compassbutton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UCompassWidget_C::BndEvt__Compassbutton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassWidget.CompassWidget_C.BndEvt__Compassbutton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UCompassWidget_C_BndEvt__Compassbutton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CompassWidget.CompassWidget_C.BndEvt__Compassbutton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UCompassWidget_C::BndEvt__Compassbutton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassWidget.CompassWidget_C.BndEvt__Compassbutton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UCompassWidget_C_BndEvt__Compassbutton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CompassWidget.CompassWidget_C.ExecuteUbergraph_CompassWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCompassWidget_C::ExecuteUbergraph_CompassWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassWidget.CompassWidget_C.ExecuteUbergraph_CompassWidget");

	UCompassWidget_C_ExecuteUbergraph_CompassWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
