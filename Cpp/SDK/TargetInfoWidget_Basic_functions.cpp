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

// Function TargetInfoWidget_Basic.TargetInfoWidget_Basic_C.GetWidgetElements
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FrontiersUI_ETargetInfoWidgetElement Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>         ReturnValue                    (Parm, OutParm, ReturnParm, ContainsInstancedReference)
TArray<class UWidget*> UTargetInfoWidget_Basic_C::GetWidgetElements(FrontiersUI_ETargetInfoWidgetElement Element)
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetInfoWidget_Basic.TargetInfoWidget_Basic_C.GetWidgetElements");

	UTargetInfoWidget_Basic_C_GetWidgetElements_Params params;
	params.Element = Element;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TargetInfoWidget_Basic.TargetInfoWidget_Basic_C.GetNameTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UTargetInfoWidget_Basic_C::GetNameTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetInfoWidget_Basic.TargetInfoWidget_Basic_C.GetNameTextBlock");

	UTargetInfoWidget_Basic_C_GetNameTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
