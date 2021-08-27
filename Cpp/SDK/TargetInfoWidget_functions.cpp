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

// Function TargetInfoWidget.TargetInfoWidget_C.GetOverallVisibilityContainer
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UTargetInfoWidget_C::GetOverallVisibilityContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetInfoWidget.TargetInfoWidget_C.GetOverallVisibilityContainer");

	UTargetInfoWidget_C_GetOverallVisibilityContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TargetInfoWidget.TargetInfoWidget_C.GetPanel
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPanelWidget*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPanelWidget* UTargetInfoWidget_C::GetPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetInfoWidget.TargetInfoWidget_C.GetPanel");

	UTargetInfoWidget_C_GetPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TargetInfoWidget.TargetInfoWidget_C.OnSelectedActorChanged
// (Event, Protected, BlueprintEvent)
void UTargetInfoWidget_C::OnSelectedActorChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetInfoWidget.TargetInfoWidget_C.OnSelectedActorChanged");

	UTargetInfoWidget_C_OnSelectedActorChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TargetInfoWidget.TargetInfoWidget_C.ExecuteUbergraph_TargetInfoWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTargetInfoWidget_C::ExecuteUbergraph_TargetInfoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetInfoWidget.TargetInfoWidget_C.ExecuteUbergraph_TargetInfoWidget");

	UTargetInfoWidget_C_ExecuteUbergraph_TargetInfoWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
