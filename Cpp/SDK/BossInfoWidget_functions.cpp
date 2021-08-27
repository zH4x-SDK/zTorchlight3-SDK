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

// Function BossInfoWidget.BossInfoWidget_C.GetOverallVisibilityContainer
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UBossInfoWidget_C::GetOverallVisibilityContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossInfoWidget.BossInfoWidget_C.GetOverallVisibilityContainer");

	UBossInfoWidget_C_GetOverallVisibilityContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BossInfoWidget.BossInfoWidget_C.GetPanel
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPanelWidget*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPanelWidget* UBossInfoWidget_C::GetPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossInfoWidget.BossInfoWidget_C.GetPanel");

	UBossInfoWidget_C_GetPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BossInfoWidget.BossInfoWidget_C.OnSelectedActorChanged
// (Event, Protected, BlueprintEvent)
void UBossInfoWidget_C::OnSelectedActorChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossInfoWidget.BossInfoWidget_C.OnSelectedActorChanged");

	UBossInfoWidget_C_OnSelectedActorChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BossInfoWidget.BossInfoWidget_C.ExecuteUbergraph_BossInfoWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBossInfoWidget_C::ExecuteUbergraph_BossInfoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossInfoWidget.BossInfoWidget_C.ExecuteUbergraph_BossInfoWidget");

	UBossInfoWidget_C_ExecuteUbergraph_BossInfoWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
