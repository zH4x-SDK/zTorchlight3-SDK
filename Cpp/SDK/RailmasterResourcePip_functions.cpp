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

// Function RailmasterResourcePip.RailmasterResourcePip_C.GetFullAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* URailmasterResourcePip_C::GetFullAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function RailmasterResourcePip.RailmasterResourcePip_C.GetFullAnimation");

	URailmasterResourcePip_C_GetFullAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RailmasterResourcePip.RailmasterResourcePip_C.GetSpendAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* URailmasterResourcePip_C::GetSpendAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function RailmasterResourcePip.RailmasterResourcePip_C.GetSpendAnimation");

	URailmasterResourcePip_C_GetSpendAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RailmasterResourcePip.RailmasterResourcePip_C.GetProgressBar
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UProgressBar* URailmasterResourcePip_C::GetProgressBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function RailmasterResourcePip.RailmasterResourcePip_C.GetProgressBar");

	URailmasterResourcePip_C_GetProgressBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RailmasterResourcePip.RailmasterResourcePip_C.ReadyAnim
// (BlueprintCallable, BlueprintEvent)
void URailmasterResourcePip_C::ReadyAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function RailmasterResourcePip.RailmasterResourcePip_C.ReadyAnim");

	URailmasterResourcePip_C_ReadyAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RailmasterResourcePip.RailmasterResourcePip_C.WidgetAnimationEvt_FullAnimation_K2Node_WidgetAnimationEvent_2
// (BlueprintEvent)
void URailmasterResourcePip_C::WidgetAnimationEvt_FullAnimation_K2Node_WidgetAnimationEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function RailmasterResourcePip.RailmasterResourcePip_C.WidgetAnimationEvt_FullAnimation_K2Node_WidgetAnimationEvent_2");

	URailmasterResourcePip_C_WidgetAnimationEvt_FullAnimation_K2Node_WidgetAnimationEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RailmasterResourcePip.RailmasterResourcePip_C.WidgetAnimationEvt_SpendAnimation_K2Node_WidgetAnimationEvent_3
// (BlueprintEvent)
void URailmasterResourcePip_C::WidgetAnimationEvt_SpendAnimation_K2Node_WidgetAnimationEvent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function RailmasterResourcePip.RailmasterResourcePip_C.WidgetAnimationEvt_SpendAnimation_K2Node_WidgetAnimationEvent_3");

	URailmasterResourcePip_C_WidgetAnimationEvt_SpendAnimation_K2Node_WidgetAnimationEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RailmasterResourcePip.RailmasterResourcePip_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URailmasterResourcePip_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RailmasterResourcePip.RailmasterResourcePip_C.PreConstruct");

	URailmasterResourcePip_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RailmasterResourcePip.RailmasterResourcePip_C.ExecuteUbergraph_RailmasterResourcePip
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URailmasterResourcePip_C::ExecuteUbergraph_RailmasterResourcePip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RailmasterResourcePip.RailmasterResourcePip_C.ExecuteUbergraph_RailmasterResourcePip");

	URailmasterResourcePip_C_ExecuteUbergraph_RailmasterResourcePip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
