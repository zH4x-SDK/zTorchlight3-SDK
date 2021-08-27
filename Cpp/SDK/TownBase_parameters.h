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

// Function TownBase.TownBase_C.OnFocusReceived
struct UTownBase_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function TownBase.TownBase_C.GetSpokeQuestIcon
struct UTownBase_C_GetSpokeQuestIcon_Params
{
	class UTLImage*                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TownBase.TownBase_C.GetAreaNameWithLevelText
struct UTownBase_C_GetAreaNameWithLevelText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TownBase.TownBase_C.Get_AreaName_Visibility_1
struct UTownBase_C_Get_AreaName_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TownBase.TownBase_C.GetNeighborList
struct UTownBase_C_GetNeighborList_Params
{
	class UTextListWidget*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TownBase.TownBase_C.GetAreaNameText
struct UTownBase_C_GetAreaNameText_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TownBase.TownBase_C.GetButton
struct UTownBase_C_GetButton_Params
{
	class UButton*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TownBase.TownBase_C.GetPortraitFrameVisibility
struct UTownBase_C_GetPortraitFrameVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TownBase.TownBase_C.GetYouAreHereImage
struct UTownBase_C_GetYouAreHereImage_Params
{
	class UTLImage*                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TownBase.TownBase_C.PreConstruct
struct UTownBase_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TownBase.TownBase_C.Construct
struct UTownBase_C_Construct_Params
{
};

// Function TownBase.TownBase_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UTownBase_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TownBase.TownBase_C.OnFocusLost
struct UTownBase_C_OnFocusLost_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function TownBase.TownBase_C.ExecuteUbergraph_TownBase
struct UTownBase_C_ExecuteUbergraph_TownBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
