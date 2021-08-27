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

// Function VideoSettings.VideoSettings_C.GetDetectDefaultsButton
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UButton* UVideoSettings_C::GetDetectDefaultsButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.GetDetectDefaultsButton");

	UVideoSettings_C_GetDetectDefaultsButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VideoSettings.VideoSettings_C.GetOptionListWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UOptionListWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UOptionListWidget* UVideoSettings_C::GetOptionListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.GetOptionListWidget");

	UVideoSettings_C_GetOptionListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VideoSettings.VideoSettings_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UVideoSettings_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.PreConstruct");

	UVideoSettings_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VideoSettings.VideoSettings_C.BndEvt__ModalFrame_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
// (BlueprintEvent)
void UVideoSettings_C::BndEvt__ModalFrame_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.BndEvt__ModalFrame_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");

	UVideoSettings_C_BndEvt__ModalFrame_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VideoSettings.VideoSettings_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UVideoSettings_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UVideoSettings_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VideoSettings.VideoSettings_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UVideoSettings_C::BndEvt__ApplyButton_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature");

	UVideoSettings_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VideoSettings.VideoSettings_C.BndEvt__DetectButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UVideoSettings_C::BndEvt__DetectButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.BndEvt__DetectButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UVideoSettings_C_BndEvt__DetectButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VideoSettings.VideoSettings_C.ExecuteUbergraph_VideoSettings
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVideoSettings_C::ExecuteUbergraph_VideoSettings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.ExecuteUbergraph_VideoSettings");

	UVideoSettings_C_ExecuteUbergraph_VideoSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
