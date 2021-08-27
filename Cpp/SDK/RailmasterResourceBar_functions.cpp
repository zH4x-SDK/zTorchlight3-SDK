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

// Function RailmasterResourceBar.RailmasterResourceBar_C.GetTooltipAnchor
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UMenuAnchor*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMenuAnchor* URailmasterResourceBar_C::GetTooltipAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function RailmasterResourceBar.RailmasterResourceBar_C.GetTooltipAnchor");

	URailmasterResourceBar_C_GetTooltipAnchor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RailmasterResourceBar.RailmasterResourceBar_C.GetGlowWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* URailmasterResourceBar_C::GetGlowWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function RailmasterResourceBar.RailmasterResourceBar_C.GetGlowWidget");

	URailmasterResourceBar_C_GetGlowWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RailmasterResourceBar.RailmasterResourceBar_C.GetPips
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UResourcePip*>    ReturnValue                    (Parm, OutParm, ReturnParm, ContainsInstancedReference)
TArray<class UResourcePip*> URailmasterResourceBar_C::GetPips()
{
	static auto fn = UObject::FindObject<UFunction>("Function RailmasterResourceBar.RailmasterResourceBar_C.GetPips");

	URailmasterResourceBar_C_GetPips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RailmasterResourceBar.RailmasterResourceBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void URailmasterResourceBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RailmasterResourceBar.RailmasterResourceBar_C.Construct");

	URailmasterResourceBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RailmasterResourceBar.RailmasterResourceBar_C.ReadyFlash
// (BlueprintCallable, BlueprintEvent)
void URailmasterResourceBar_C::ReadyFlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function RailmasterResourceBar.RailmasterResourceBar_C.ReadyFlash");

	URailmasterResourceBar_C_ReadyFlash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RailmasterResourceBar.RailmasterResourceBar_C.StopFlash
// (BlueprintCallable, BlueprintEvent)
void URailmasterResourceBar_C::StopFlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function RailmasterResourceBar.RailmasterResourceBar_C.StopFlash");

	URailmasterResourceBar_C_StopFlash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RailmasterResourceBar.RailmasterResourceBar_C.ExecuteUbergraph_RailmasterResourceBar
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URailmasterResourceBar_C::ExecuteUbergraph_RailmasterResourceBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RailmasterResourceBar.RailmasterResourceBar_C.ExecuteUbergraph_RailmasterResourceBar");

	URailmasterResourceBar_C_ExecuteUbergraph_RailmasterResourceBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
