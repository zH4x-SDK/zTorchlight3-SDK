﻿// Name: Torchlight3, Version: 4.26.1

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

// Function SinglePlayerAccountReset.SinglePlayerAccountReset_C.SetResetProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USinglePlayerAccountReset_C::SetResetProgress(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function SinglePlayerAccountReset.SinglePlayerAccountReset_C.SetResetProgress");

	USinglePlayerAccountReset_C_SetResetProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SinglePlayerAccountReset.SinglePlayerAccountReset_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USinglePlayerAccountReset_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SinglePlayerAccountReset.SinglePlayerAccountReset_C.Tick");

	USinglePlayerAccountReset_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SinglePlayerAccountReset.SinglePlayerAccountReset_C.BlueprintOnShown
// (Event, Protected, BlueprintEvent)
void USinglePlayerAccountReset_C::BlueprintOnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function SinglePlayerAccountReset.SinglePlayerAccountReset_C.BlueprintOnShown");

	USinglePlayerAccountReset_C_BlueprintOnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SinglePlayerAccountReset.SinglePlayerAccountReset_C.BndEvt__TLButton_12_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void USinglePlayerAccountReset_C::BndEvt__TLButton_12_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SinglePlayerAccountReset.SinglePlayerAccountReset_C.BndEvt__TLButton_12_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	USinglePlayerAccountReset_C_BndEvt__TLButton_12_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SinglePlayerAccountReset.SinglePlayerAccountReset_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
void USinglePlayerAccountReset_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SinglePlayerAccountReset.SinglePlayerAccountReset_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");

	USinglePlayerAccountReset_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SinglePlayerAccountReset.SinglePlayerAccountReset_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void USinglePlayerAccountReset_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SinglePlayerAccountReset.SinglePlayerAccountReset_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	USinglePlayerAccountReset_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SinglePlayerAccountReset.SinglePlayerAccountReset_C.ExecuteUbergraph_SinglePlayerAccountReset
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USinglePlayerAccountReset_C::ExecuteUbergraph_SinglePlayerAccountReset(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SinglePlayerAccountReset.SinglePlayerAccountReset_C.ExecuteUbergraph_SinglePlayerAccountReset");

	USinglePlayerAccountReset_C_ExecuteUbergraph_SinglePlayerAccountReset_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
