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

// Function FeedbackOption.FeedbackOption_C.Get_FeedbackText_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UFeedbackOption_C::Get_FeedbackText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedbackOption.FeedbackOption_C.Get_FeedbackText_Text_1");

	UFeedbackOption_C_Get_FeedbackText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FeedbackOption.FeedbackOption_C.GetEditableText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UMultiLineEditableText*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMultiLineEditableText* UFeedbackOption_C::GetEditableText()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedbackOption.FeedbackOption_C.GetEditableText");

	UFeedbackOption_C_GetEditableText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FeedbackOption.FeedbackOption_C.GetDropdown
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLComboBox*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLComboBox* UFeedbackOption_C::GetDropdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedbackOption.FeedbackOption_C.GetDropdown");

	UFeedbackOption_C_GetDropdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FeedbackOption.FeedbackOption_C.GetCheckbox
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLCheckBox*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLCheckBox* UFeedbackOption_C::GetCheckbox()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedbackOption.FeedbackOption_C.GetCheckbox");

	UFeedbackOption_C_GetCheckbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FeedbackOption.FeedbackOption_C.BlueprintOnShown
// (Event, Protected, BlueprintEvent)
void UFeedbackOption_C::BlueprintOnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedbackOption.FeedbackOption_C.BlueprintOnShown");

	UFeedbackOption_C_BlueprintOnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FeedbackOption.FeedbackOption_C.ExecuteUbergraph_FeedbackOption
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFeedbackOption_C::ExecuteUbergraph_FeedbackOption(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedbackOption.FeedbackOption_C.ExecuteUbergraph_FeedbackOption");

	UFeedbackOption_C_ExecuteUbergraph_FeedbackOption_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
