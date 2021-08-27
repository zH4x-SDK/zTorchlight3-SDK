#pragma once

// Name: Torchlight3, Version: 1.0.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function OptionItem.OptionItem_C.GetCheckbox
struct UOptionItem_C_GetCheckbox_Params
{
	class UTLCheckBox*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionItem.OptionItem_C.GetDropdown
struct UOptionItem_C_GetDropdown_Params
{
	class UTLComboBox*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionItem.OptionItem_C.GetSlider
struct UOptionItem_C_GetSlider_Params
{
	class UTLSlider*                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionItem.OptionItem_C.SetActiveOptionType
struct UOptionItem_C_SetActiveOptionType_Params
{
	FrontiersUI_EOptionWidgetType                      InType;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionItem.OptionItem_C.ExecuteUbergraph_OptionItem
struct UOptionItem_C_ExecuteUbergraph_OptionItem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
