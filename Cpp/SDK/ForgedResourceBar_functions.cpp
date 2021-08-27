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

// Function ForgedResourceBar.ForgedResourceBar_C.GetTooltipAnchor
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UMenuAnchor*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMenuAnchor* UForgedResourceBar_C::GetTooltipAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForgedResourceBar.ForgedResourceBar_C.GetTooltipAnchor");

	UForgedResourceBar_C_GetTooltipAnchor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ForgedResourceBar.ForgedResourceBar_C.GetResourceAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UForgedResourceBar_C::GetResourceAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForgedResourceBar.ForgedResourceBar_C.GetResourceAnimation");

	UForgedResourceBar_C_GetResourceAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ForgedResourceBar.ForgedResourceBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UForgedResourceBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForgedResourceBar.ForgedResourceBar_C.Construct");

	UForgedResourceBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ForgedResourceBar.ForgedResourceBar_C.ExecuteUbergraph_ForgedResourceBar
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UForgedResourceBar_C::ExecuteUbergraph_ForgedResourceBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForgedResourceBar.ForgedResourceBar_C.ExecuteUbergraph_ForgedResourceBar");

	UForgedResourceBar_C_ExecuteUbergraph_ForgedResourceBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
