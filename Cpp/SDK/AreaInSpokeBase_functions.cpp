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

// Function AreaInSpokeBase.AreaInSpokeBase_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UAreaInSpokeBase_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AreaInSpokeBase.AreaInSpokeBase_C.OnFocusReceived");

	UAreaInSpokeBase_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AreaInSpokeBase.AreaInSpokeBase_C.Get_AreaName_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UAreaInSpokeBase_C::Get_AreaName_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AreaInSpokeBase.AreaInSpokeBase_C.Get_AreaName_Visibility_1");

	UAreaInSpokeBase_C_Get_AreaName_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AreaInSpokeBase.AreaInSpokeBase_C.GetAreaNameWithLevelText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UAreaInSpokeBase_C::GetAreaNameWithLevelText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AreaInSpokeBase.AreaInSpokeBase_C.GetAreaNameWithLevelText");

	UAreaInSpokeBase_C_GetAreaNameWithLevelText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AreaInSpokeBase.AreaInSpokeBase_C.GetSpokeQuestIcon
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UAreaInSpokeBase_C::GetSpokeQuestIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AreaInSpokeBase.AreaInSpokeBase_C.GetSpokeQuestIcon");

	UAreaInSpokeBase_C_GetSpokeQuestIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AreaInSpokeBase.AreaInSpokeBase_C.GetNeighborList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextListWidget*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextListWidget* UAreaInSpokeBase_C::GetNeighborList()
{
	static auto fn = UObject::FindObject<UFunction>("Function AreaInSpokeBase.AreaInSpokeBase_C.GetNeighborList");

	UAreaInSpokeBase_C_GetNeighborList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AreaInSpokeBase.AreaInSpokeBase_C.GetAreaNameText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UAreaInSpokeBase_C::GetAreaNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AreaInSpokeBase.AreaInSpokeBase_C.GetAreaNameText");

	UAreaInSpokeBase_C_GetAreaNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AreaInSpokeBase.AreaInSpokeBase_C.GetButton
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UButton*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UButton* UAreaInSpokeBase_C::GetButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function AreaInSpokeBase.AreaInSpokeBase_C.GetButton");

	UAreaInSpokeBase_C_GetButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AreaInSpokeBase.AreaInSpokeBase_C.GetPortraitFrameVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UAreaInSpokeBase_C::GetPortraitFrameVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function AreaInSpokeBase.AreaInSpokeBase_C.GetPortraitFrameVisibility");

	UAreaInSpokeBase_C_GetPortraitFrameVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AreaInSpokeBase.AreaInSpokeBase_C.GetYouAreHereImage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UAreaInSpokeBase_C::GetYouAreHereImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AreaInSpokeBase.AreaInSpokeBase_C.GetYouAreHereImage");

	UAreaInSpokeBase_C_GetYouAreHereImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AreaInSpokeBase.AreaInSpokeBase_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAreaInSpokeBase_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AreaInSpokeBase.AreaInSpokeBase_C.PreConstruct");

	UAreaInSpokeBase_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AreaInSpokeBase.AreaInSpokeBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UAreaInSpokeBase_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AreaInSpokeBase.AreaInSpokeBase_C.Construct");

	UAreaInSpokeBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AreaInSpokeBase.AreaInSpokeBase_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UAreaInSpokeBase_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AreaInSpokeBase.AreaInSpokeBase_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UAreaInSpokeBase_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AreaInSpokeBase.AreaInSpokeBase_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UAreaInSpokeBase_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AreaInSpokeBase.AreaInSpokeBase_C.OnFocusLost");

	UAreaInSpokeBase_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AreaInSpokeBase.AreaInSpokeBase_C.ExecuteUbergraph_AreaInSpokeBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAreaInSpokeBase_C::ExecuteUbergraph_AreaInSpokeBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AreaInSpokeBase.AreaInSpokeBase_C.ExecuteUbergraph_AreaInSpokeBase");

	UAreaInSpokeBase_C_ExecuteUbergraph_AreaInSpokeBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
