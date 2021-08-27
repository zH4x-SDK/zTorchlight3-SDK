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

// Function LogTaskWidget.LogTaskWidget_C.GetShowProgressAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* ULogTaskWidget_C::GetShowProgressAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function LogTaskWidget.LogTaskWidget_C.GetShowProgressAnimation");

	ULogTaskWidget_C_GetShowProgressAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LogTaskWidget.LogTaskWidget_C.GetTaskTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLRichTextBlock*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLRichTextBlock* ULogTaskWidget_C::GetTaskTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function LogTaskWidget.LogTaskWidget_C.GetTaskTextBlock");

	ULogTaskWidget_C_GetTaskTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LogTaskWidget.LogTaskWidget_C.GetCheckmarkColorAndOpacity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor ULogTaskWidget_C::GetCheckmarkColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function LogTaskWidget.LogTaskWidget_C.GetCheckmarkColorAndOpacity");

	ULogTaskWidget_C_GetCheckmarkColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
