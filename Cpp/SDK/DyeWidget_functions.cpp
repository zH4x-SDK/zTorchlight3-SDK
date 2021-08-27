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

// Function DyeWidget.DyeWidget_C.GetDyeImage
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UDyeWidget_C::GetDyeImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DyeWidget.DyeWidget_C.GetDyeImage");

	UDyeWidget_C_GetDyeImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DyeWidget.DyeWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UDyeWidget_C::BndEvt__Button_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DyeWidget.DyeWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UDyeWidget_C_BndEvt__Button_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DyeWidget.DyeWidget_C.ExecuteUbergraph_DyeWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDyeWidget_C::ExecuteUbergraph_DyeWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DyeWidget.DyeWidget_C.ExecuteUbergraph_DyeWidget");

	UDyeWidget_C_ExecuteUbergraph_DyeWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
