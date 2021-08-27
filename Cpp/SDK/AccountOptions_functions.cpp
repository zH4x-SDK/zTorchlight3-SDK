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

// Function AccountOptions.AccountOptions_C.On_UnlinkLIstWidget_GetNextListBinding_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UAccountOptions_C::On_UnlinkLIstWidget_GetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountOptions.AccountOptions_C.On_UnlinkLIstWidget_GetNextListBinding_1");

	UAccountOptions_C_On_UnlinkLIstWidget_GetNextListBinding_1_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AccountOptions.AccountOptions_C.GetButtonList
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UAccountOptions_C::GetButtonList()
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountOptions.AccountOptions_C.GetButtonList");

	UAccountOptions_C_GetButtonList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AccountOptions.AccountOptions_C.On_ButtonListMultiplayer_GetNextListBinding_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UAccountOptions_C::On_ButtonListMultiplayer_GetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountOptions.AccountOptions_C.On_ButtonListMultiplayer_GetNextListBinding_1");

	UAccountOptions_C_On_ButtonListMultiplayer_GetNextListBinding_1_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AccountOptions.AccountOptions_C.On_ButtonListSinglePlayer_GetNextListBinding_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentList                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        NavDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UAccountOptions_C::On_ButtonListSinglePlayer_GetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountOptions.AccountOptions_C.On_ButtonListSinglePlayer_GetNextListBinding_1");

	UAccountOptions_C_On_ButtonListSinglePlayer_GetNextListBinding_1_Params params;
	params.CurrentList = CurrentList;
	params.NavDirection = NavDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AccountOptions.AccountOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UAccountOptions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountOptions.AccountOptions_C.Construct");

	UAccountOptions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AccountOptions.AccountOptions_C.BlueprintOnShown
// (Event, Protected, BlueprintEvent)
void UAccountOptions_C::BlueprintOnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountOptions.AccountOptions_C.BlueprintOnShown");

	UAccountOptions_C_BlueprintOnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AccountOptions.AccountOptions_C.BndEvt__SinglePlayerResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UAccountOptions_C::BndEvt__SinglePlayerResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountOptions.AccountOptions_C.BndEvt__SinglePlayerResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UAccountOptions_C_BndEvt__SinglePlayerResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AccountOptions.AccountOptions_C.BndEvt__MultiplayerResetButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UAccountOptions_C::BndEvt__MultiplayerResetButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountOptions.AccountOptions_C.BndEvt__MultiplayerResetButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UAccountOptions_C_BndEvt__MultiplayerResetButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AccountOptions.AccountOptions_C.UpdateSinglePlayerHeroCount
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            HeroCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAccountOptions_C::UpdateSinglePlayerHeroCount(int HeroCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountOptions.AccountOptions_C.UpdateSinglePlayerHeroCount");

	UAccountOptions_C_UpdateSinglePlayerHeroCount_Params params;
	params.HeroCount = HeroCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AccountOptions.AccountOptions_C.UpdateMultiplayerHeroCount
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            HeroCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAccountOptions_C::UpdateMultiplayerHeroCount(int HeroCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountOptions.AccountOptions_C.UpdateMultiplayerHeroCount");

	UAccountOptions_C_UpdateMultiplayerHeroCount_Params params;
	params.HeroCount = HeroCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AccountOptions.AccountOptions_C.BndEvt__UnlinkAccountButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UAccountOptions_C::BndEvt__UnlinkAccountButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountOptions.AccountOptions_C.BndEvt__UnlinkAccountButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UAccountOptions_C_BndEvt__UnlinkAccountButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AccountOptions.AccountOptions_C.HideMultiplayerLoadingSpinner
// (Event, Public, BlueprintEvent)
void UAccountOptions_C::HideMultiplayerLoadingSpinner()
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountOptions.AccountOptions_C.HideMultiplayerLoadingSpinner");

	UAccountOptions_C_HideMultiplayerLoadingSpinner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AccountOptions.AccountOptions_C.ExecuteUbergraph_AccountOptions
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAccountOptions_C::ExecuteUbergraph_AccountOptions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AccountOptions.AccountOptions_C.ExecuteUbergraph_AccountOptions");

	UAccountOptions_C_ExecuteUbergraph_AccountOptions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
