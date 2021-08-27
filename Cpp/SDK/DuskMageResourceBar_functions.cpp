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

// Function DuskMageResourceBar.DuskMageResourceBar_C.GetTooltipAnchor
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UMenuAnchor*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMenuAnchor* UDuskMageResourceBar_C::GetTooltipAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DuskMageResourceBar.DuskMageResourceBar_C.GetTooltipAnchor");

	UDuskMageResourceBar_C_GetTooltipAnchor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DuskMageResourceBar.DuskMageResourceBar_C.GetDarkChargeBar
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UActiveTraitBarWidget*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UActiveTraitBarWidget* UDuskMageResourceBar_C::GetDarkChargeBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function DuskMageResourceBar.DuskMageResourceBar_C.GetDarkChargeBar");

	UDuskMageResourceBar_C_GetDarkChargeBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DuskMageResourceBar.DuskMageResourceBar_C.GetLightChargeBar
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UActiveTraitBarWidget*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UActiveTraitBarWidget* UDuskMageResourceBar_C::GetLightChargeBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function DuskMageResourceBar.DuskMageResourceBar_C.GetLightChargeBar");

	UDuskMageResourceBar_C_GetLightChargeBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
