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

// Function TargetInfoWidget_Monster.TargetInfoWidget_Monster_C.GetNameTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UTargetInfoWidget_Monster_C::GetNameTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetInfoWidget_Monster.TargetInfoWidget_Monster_C.GetNameTextBlock");

	UTargetInfoWidget_Monster_C_GetNameTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TargetInfoWidget_Monster.TargetInfoWidget_Monster_C.GetWidgetElements
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FrontiersUI_ETargetInfoWidgetElement Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>         ReturnValue                    (Parm, OutParm, ReturnParm, ContainsInstancedReference)
TArray<class UWidget*> UTargetInfoWidget_Monster_C::GetWidgetElements(FrontiersUI_ETargetInfoWidgetElement Element)
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetInfoWidget_Monster.TargetInfoWidget_Monster_C.GetWidgetElements");

	UTargetInfoWidget_Monster_C_GetWidgetElements_Params params;
	params.Element = Element;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TargetInfoWidget_Monster.TargetInfoWidget_Monster_C.AddHPFragmentToPanel
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UHPBarFragment*          Fragment                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTargetInfoWidget_Monster_C::AddHPFragmentToPanel(class UHPBarFragment* Fragment)
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetInfoWidget_Monster.TargetInfoWidget_Monster_C.AddHPFragmentToPanel");

	UTargetInfoWidget_Monster_C_AddHPFragmentToPanel_Params params;
	params.Fragment = Fragment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TargetInfoWidget_Monster.TargetInfoWidget_Monster_C.ExecuteUbergraph_TargetInfoWidget_Monster
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTargetInfoWidget_Monster_C::ExecuteUbergraph_TargetInfoWidget_Monster(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetInfoWidget_Monster.TargetInfoWidget_Monster_C.ExecuteUbergraph_TargetInfoWidget_Monster");

	UTargetInfoWidget_Monster_C_ExecuteUbergraph_TargetInfoWidget_Monster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
