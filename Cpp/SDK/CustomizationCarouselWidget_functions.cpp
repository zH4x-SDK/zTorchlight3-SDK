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

// Function CustomizationCarouselWidget.CustomizationCarouselWidget_C.GetCountText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UCustomizationCarouselWidget_C::GetCountText()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizationCarouselWidget.CustomizationCarouselWidget_C.GetCountText");

	UCustomizationCarouselWidget_C_GetCountText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CustomizationCarouselWidget.CustomizationCarouselWidget_C.GetLabelText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTextBlock*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextBlock* UCustomizationCarouselWidget_C::GetLabelText()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizationCarouselWidget.CustomizationCarouselWidget_C.GetLabelText");

	UCustomizationCarouselWidget_C_GetLabelText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CustomizationCarouselWidget.CustomizationCarouselWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCustomizationCarouselWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizationCarouselWidget.CustomizationCarouselWidget_C.PreConstruct");

	UCustomizationCarouselWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CustomizationCarouselWidget.CustomizationCarouselWidget_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UCustomizationCarouselWidget_C::BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizationCarouselWidget.CustomizationCarouselWidget_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UCustomizationCarouselWidget_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CustomizationCarouselWidget.CustomizationCarouselWidget_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UCustomizationCarouselWidget_C::BndEvt__RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizationCarouselWidget.CustomizationCarouselWidget_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UCustomizationCarouselWidget_C_BndEvt__RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CustomizationCarouselWidget.CustomizationCarouselWidget_C.ExecuteUbergraph_CustomizationCarouselWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCustomizationCarouselWidget_C::ExecuteUbergraph_CustomizationCarouselWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizationCarouselWidget.CustomizationCarouselWidget_C.ExecuteUbergraph_CustomizationCarouselWidget");

	UCustomizationCarouselWidget_C_ExecuteUbergraph_CustomizationCarouselWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
