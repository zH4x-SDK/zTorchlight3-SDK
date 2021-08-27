#pragma once

// Name: Torchlight3, Version: 4.26.1


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

// Function FeedbackOption.FeedbackOption_C.Get_FeedbackText_Text_1
struct UFeedbackOption_C_Get_FeedbackText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function FeedbackOption.FeedbackOption_C.GetEditableText
struct UFeedbackOption_C_GetEditableText_Params
{
	class UMultiLineEditableText*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FeedbackOption.FeedbackOption_C.GetDropdown
struct UFeedbackOption_C_GetDropdown_Params
{
	class UTLComboBox*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FeedbackOption.FeedbackOption_C.GetCheckbox
struct UFeedbackOption_C_GetCheckbox_Params
{
	class UTLCheckBox*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FeedbackOption.FeedbackOption_C.BlueprintOnShown
struct UFeedbackOption_C_BlueprintOnShown_Params
{
};

// Function FeedbackOption.FeedbackOption_C.ExecuteUbergraph_FeedbackOption
struct UFeedbackOption_C_ExecuteUbergraph_FeedbackOption_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
