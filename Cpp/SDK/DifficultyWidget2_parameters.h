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

// Function DifficultyWidget2.DifficultyWidget2_C.DeselectUI
struct UDifficultyWidget2_C_DeselectUI_Params
{
};

// Function DifficultyWidget2.DifficultyWidget2_C.SelectUI
struct UDifficultyWidget2_C_SelectUI_Params
{
};

// Function DifficultyWidget2.DifficultyWidget2_C.UnhoverUI
struct UDifficultyWidget2_C_UnhoverUI_Params
{
};

// Function DifficultyWidget2.DifficultyWidget2_C.HoverUI
struct UDifficultyWidget2_C_HoverUI_Params
{
};

// Function DifficultyWidget2.DifficultyWidget2_C.OnFocusReceived
struct UDifficultyWidget2_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function DifficultyWidget2.DifficultyWidget2_C.GetBackgroundWidget
struct UDifficultyWidget2_C_GetBackgroundWidget_Params
{
	class UTLImage*                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DifficultyWidget2.DifficultyWidget2_C.GetFrameWidget
struct UDifficultyWidget2_C_GetFrameWidget_Params
{
	class UTLBorder*                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DifficultyWidget2.DifficultyWidget2_C.GetHighlightShieldWidget
struct UDifficultyWidget2_C_GetHighlightShieldWidget_Params
{
	class UTLImage*                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DifficultyWidget2.DifficultyWidget2_C.GetShieldWidget
struct UDifficultyWidget2_C_GetShieldWidget_Params
{
	class UTLImage*                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DifficultyWidget2.DifficultyWidget2_C.GetShoulderWidget
struct UDifficultyWidget2_C_GetShoulderWidget_Params
{
	class UTLImage*                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DifficultyWidget2.DifficultyWidget2_C.GetLastDifficultyWidget
struct UDifficultyWidget2_C_GetLastDifficultyWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DifficultyWidget2.DifficultyWidget2_C.GetDifficultyDescription
struct UDifficultyWidget2_C_GetDifficultyDescription_Params
{
	class UTextLayoutWidget*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DifficultyWidget2.DifficultyWidget2_C.GetDifficultyName
struct UDifficultyWidget2_C_GetDifficultyName_Params
{
	class UTextLayoutWidget*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DifficultyWidget2.DifficultyWidget2_C.UpdateUI
struct UDifficultyWidget2_C_UpdateUI_Params
{
	struct FLinearColor                                DifficultyColor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DifficultyWidget2.DifficultyWidget2_C.OnMouseEnter
struct UDifficultyWidget2_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function DifficultyWidget2.DifficultyWidget2_C.OnMouseLeave
struct UDifficultyWidget2_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function DifficultyWidget2.DifficultyWidget2_C.SelectWidgetUI
struct UDifficultyWidget2_C_SelectWidgetUI_Params
{
};

// Function DifficultyWidget2.DifficultyWidget2_C.DeselectWidgetUI
struct UDifficultyWidget2_C_DeselectWidgetUI_Params
{
};

// Function DifficultyWidget2.DifficultyWidget2_C.OnFocusLost
struct UDifficultyWidget2_C_OnFocusLost_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function DifficultyWidget2.DifficultyWidget2_C.ExecuteUbergraph_DifficultyWidget2
struct UDifficultyWidget2_C_ExecuteUbergraph_DifficultyWidget2_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
