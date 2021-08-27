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

// Function TargetInfoWidget_Warp.TargetInfoWidget_Warp_C.GetWidgetElements
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FrontiersUI_ETargetInfoWidgetElement Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>         ReturnValue                    (Parm, OutParm, ReturnParm, ContainsInstancedReference)
TArray<class UWidget*> UTargetInfoWidget_Warp_C::GetWidgetElements(FrontiersUI_ETargetInfoWidgetElement Element)
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetInfoWidget_Warp.TargetInfoWidget_Warp_C.GetWidgetElements");

	UTargetInfoWidget_Warp_C_GetWidgetElements_Params params;
	params.Element = Element;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
