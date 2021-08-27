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

// Function CursedCaptainResourceBar.CursedCaptainResourceBar_C.GetPipsSwitcher
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLWidgetSwitcher*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLWidgetSwitcher* UCursedCaptainResourceBar_C::GetPipsSwitcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function CursedCaptainResourceBar.CursedCaptainResourceBar_C.GetPipsSwitcher");

	UCursedCaptainResourceBar_C_GetPipsSwitcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CursedCaptainResourceBar.CursedCaptainResourceBar_C.GetExtendedPipsWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UCursedCaptainResourceBar_C::GetExtendedPipsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CursedCaptainResourceBar.CursedCaptainResourceBar_C.GetExtendedPipsWidget");

	UCursedCaptainResourceBar_C_GetExtendedPipsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CursedCaptainResourceBar.CursedCaptainResourceBar_C.GetDefaultPipsWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UCursedCaptainResourceBar_C::GetDefaultPipsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CursedCaptainResourceBar.CursedCaptainResourceBar_C.GetDefaultPipsWidget");

	UCursedCaptainResourceBar_C_GetDefaultPipsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CursedCaptainResourceBar.CursedCaptainResourceBar_C.GetTooltipAnchor
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UMenuAnchor*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMenuAnchor* UCursedCaptainResourceBar_C::GetTooltipAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function CursedCaptainResourceBar.CursedCaptainResourceBar_C.GetTooltipAnchor");

	UCursedCaptainResourceBar_C_GetTooltipAnchor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CursedCaptainResourceBar.CursedCaptainResourceBar_C.GetPips
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UResourcePip*>    ReturnValue                    (Parm, OutParm, ReturnParm, ContainsInstancedReference)
TArray<class UResourcePip*> UCursedCaptainResourceBar_C::GetPips()
{
	static auto fn = UObject::FindObject<UFunction>("Function CursedCaptainResourceBar.CursedCaptainResourceBar_C.GetPips");

	UCursedCaptainResourceBar_C_GetPips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CursedCaptainResourceBar.CursedCaptainResourceBar_C.BlueprintMaxResource
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsMax                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCursedCaptainResourceBar_C::BlueprintMaxResource(bool bIsMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function CursedCaptainResourceBar.CursedCaptainResourceBar_C.BlueprintMaxResource");

	UCursedCaptainResourceBar_C_BlueprintMaxResource_Params params;
	params.bIsMax = bIsMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CursedCaptainResourceBar.CursedCaptainResourceBar_C.ExecuteUbergraph_CursedCaptainResourceBar
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCursedCaptainResourceBar_C::ExecuteUbergraph_CursedCaptainResourceBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CursedCaptainResourceBar.CursedCaptainResourceBar_C.ExecuteUbergraph_CursedCaptainResourceBar");

	UCursedCaptainResourceBar_C_ExecuteUbergraph_CursedCaptainResourceBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
