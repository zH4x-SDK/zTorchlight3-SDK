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

// Function TravelToKnownDestinationWidget.TravelToKnownDestinationWidget_C.GetButtonLabel
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UTravelToKnownDestinationWidget_C::GetButtonLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelToKnownDestinationWidget.TravelToKnownDestinationWidget_C.GetButtonLabel");

	UTravelToKnownDestinationWidget_C_GetButtonLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TravelToKnownDestinationWidget.TravelToKnownDestinationWidget_C.GetIcon
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UTravelToKnownDestinationWidget_C::GetIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelToKnownDestinationWidget.TravelToKnownDestinationWidget_C.GetIcon");

	UTravelToKnownDestinationWidget_C_GetIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TravelToKnownDestinationWidget.TravelToKnownDestinationWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UTravelToKnownDestinationWidget_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelToKnownDestinationWidget.TravelToKnownDestinationWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UTravelToKnownDestinationWidget_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TravelToKnownDestinationWidget.TravelToKnownDestinationWidget_C.ExecuteUbergraph_TravelToKnownDestinationWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTravelToKnownDestinationWidget_C::ExecuteUbergraph_TravelToKnownDestinationWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelToKnownDestinationWidget.TravelToKnownDestinationWidget_C.ExecuteUbergraph_TravelToKnownDestinationWidget");

	UTravelToKnownDestinationWidget_C_ExecuteUbergraph_TravelToKnownDestinationWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
