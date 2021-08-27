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

// Function TargetInfoWidget_Champion.TargetInfoWidget_Champion_C.GetWidgetElements
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FrontiersUI_ETargetInfoWidgetElement Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>         ReturnValue                    (Parm, OutParm, ReturnParm, ContainsInstancedReference)
TArray<class UWidget*> UTargetInfoWidget_Champion_C::GetWidgetElements(FrontiersUI_ETargetInfoWidgetElement Element)
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetInfoWidget_Champion.TargetInfoWidget_Champion_C.GetWidgetElements");

	UTargetInfoWidget_Champion_C_GetWidgetElements_Params params;
	params.Element = Element;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TargetInfoWidget_Champion.TargetInfoWidget_Champion_C.AddHPFragmentToPanel
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UHPBarFragment*          Fragment                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTargetInfoWidget_Champion_C::AddHPFragmentToPanel(class UHPBarFragment* Fragment)
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetInfoWidget_Champion.TargetInfoWidget_Champion_C.AddHPFragmentToPanel");

	UTargetInfoWidget_Champion_C_AddHPFragmentToPanel_Params params;
	params.Fragment = Fragment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TargetInfoWidget_Champion.TargetInfoWidget_Champion_C.ExecuteUbergraph_TargetInfoWidget_Champion
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTargetInfoWidget_Champion_C::ExecuteUbergraph_TargetInfoWidget_Champion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetInfoWidget_Champion.TargetInfoWidget_Champion_C.ExecuteUbergraph_TargetInfoWidget_Champion");

	UTargetInfoWidget_Champion_C_ExecuteUbergraph_TargetInfoWidget_Champion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
