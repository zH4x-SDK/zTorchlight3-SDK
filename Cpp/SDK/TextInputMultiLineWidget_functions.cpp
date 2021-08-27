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

// Function TextInputMultiLineWidget.TextInputMultiLineWidget_C.GetEditableText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UTextInputMultiLineWidget_C::GetEditableText()
{
	static auto fn = UObject::FindObject<UFunction>("Function TextInputMultiLineWidget.TextInputMultiLineWidget_C.GetEditableText");

	UTextInputMultiLineWidget_C_GetEditableText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TextInputMultiLineWidget.TextInputMultiLineWidget_C.GetInputValue
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UTextInputMultiLineWidget_C::GetInputValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function TextInputMultiLineWidget.TextInputMultiLineWidget_C.GetInputValue");

	UTextInputMultiLineWidget_C_GetInputValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
