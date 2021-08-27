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

// Function RelicEnergyBar.RelicEnergyBar_C.GetPowerWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* URelicEnergyBar_C::GetPowerWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function RelicEnergyBar.RelicEnergyBar_C.GetPowerWidget");

	URelicEnergyBar_C_GetPowerWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RelicEnergyBar.RelicEnergyBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URelicEnergyBar_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RelicEnergyBar.RelicEnergyBar_C.PreConstruct");

	URelicEnergyBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RelicEnergyBar.RelicEnergyBar_C.ExecuteUbergraph_RelicEnergyBar
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URelicEnergyBar_C::ExecuteUbergraph_RelicEnergyBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RelicEnergyBar.RelicEnergyBar_C.ExecuteUbergraph_RelicEnergyBar");

	URelicEnergyBar_C_ExecuteUbergraph_RelicEnergyBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
