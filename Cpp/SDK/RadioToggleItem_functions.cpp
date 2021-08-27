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

// Function RadioToggleItem.RadioToggleItem_C.GetCheckbox
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLCheckBox*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLCheckBox* URadioToggleItem_C::GetCheckbox()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioToggleItem.RadioToggleItem_C.GetCheckbox");

	URadioToggleItem_C_GetCheckbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RadioToggleItem.RadioToggleItem_C.SetActiveOptionType
// (Event, Public, BlueprintEvent)
// Parameters:
// FrontiersUI_EOptionWidgetType  InType                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadioToggleItem_C::SetActiveOptionType(FrontiersUI_EOptionWidgetType InType)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioToggleItem.RadioToggleItem_C.SetActiveOptionType");

	URadioToggleItem_C_SetActiveOptionType_Params params;
	params.InType = InType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadioToggleItem.RadioToggleItem_C.ExecuteUbergraph_RadioToggleItem
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadioToggleItem_C::ExecuteUbergraph_RadioToggleItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioToggleItem.RadioToggleItem_C.ExecuteUbergraph_RadioToggleItem");

	URadioToggleItem_C_ExecuteUbergraph_RadioToggleItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
