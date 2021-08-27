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

// Function OptionItem.OptionItem_C.GetCheckbox
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLCheckBox*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLCheckBox* UOptionItem_C::GetCheckbox()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionItem.OptionItem_C.GetCheckbox");

	UOptionItem_C_GetCheckbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OptionItem.OptionItem_C.GetDropdown
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLComboBox*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLComboBox* UOptionItem_C::GetDropdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionItem.OptionItem_C.GetDropdown");

	UOptionItem_C_GetDropdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OptionItem.OptionItem_C.GetSlider
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLSlider*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLSlider* UOptionItem_C::GetSlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionItem.OptionItem_C.GetSlider");

	UOptionItem_C_GetSlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OptionItem.OptionItem_C.SetActiveOptionType
// (Event, Public, BlueprintEvent)
// Parameters:
// FrontiersUI_EOptionWidgetType  InType                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionItem_C::SetActiveOptionType(FrontiersUI_EOptionWidgetType InType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionItem.OptionItem_C.SetActiveOptionType");

	UOptionItem_C_SetActiveOptionType_Params params;
	params.InType = InType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionItem.OptionItem_C.ExecuteUbergraph_OptionItem
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionItem_C::ExecuteUbergraph_OptionItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionItem.OptionItem_C.ExecuteUbergraph_OptionItem");

	UOptionItem_C_ExecuteUbergraph_OptionItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
