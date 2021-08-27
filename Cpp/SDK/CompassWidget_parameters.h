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

// Function CompassWidget.CompassWidget_C.CompassNotFocused
struct UCompassWidget_C_CompassNotFocused_Params
{
};

// Function CompassWidget.CompassWidget_C.CompassFocused
struct UCompassWidget_C_CompassFocused_Params
{
};

// Function CompassWidget.CompassWidget_C.OnFocusReceived
struct UCompassWidget_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function CompassWidget.CompassWidget_C.Construct
struct UCompassWidget_C_Construct_Params
{
};

// Function CompassWidget.CompassWidget_C.OnFocusLost
struct UCompassWidget_C_OnFocusLost_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function CompassWidget.CompassWidget_C.BndEvt__Compassbutton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UCompassWidget_C_BndEvt__Compassbutton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CompassWidget.CompassWidget_C.PlayCompassAnimation
struct UCompassWidget_C_PlayCompassAnimation_Params
{
};

// Function CompassWidget.CompassWidget_C.BndEvt__Compassbutton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UCompassWidget_C_BndEvt__Compassbutton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function CompassWidget.CompassWidget_C.BndEvt__Compassbutton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UCompassWidget_C_BndEvt__Compassbutton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function CompassWidget.CompassWidget_C.ExecuteUbergraph_CompassWidget
struct UCompassWidget_C_ExecuteUbergraph_CompassWidget_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
