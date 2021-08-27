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

// Function GameMessageContainer.GameMessageContainer_C.GetHideAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UGameMessageContainer_C::GetHideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMessageContainer.GameMessageContainer_C.GetHideAnimation");

	UGameMessageContainer_C_GetHideAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameMessageContainer.GameMessageContainer_C.GetActiveWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLUserWidget*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLUserWidget* UGameMessageContainer_C::GetActiveWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMessageContainer.GameMessageContainer_C.GetActiveWidget");

	UGameMessageContainer_C_GetActiveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameMessageContainer.GameMessageContainer_C.GetPanel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPanelWidget*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPanelWidget* UGameMessageContainer_C::GetPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMessageContainer.GameMessageContainer_C.GetPanel");

	UGameMessageContainer_C_GetPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
