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

// Function ChatWidget.ChatWidget_C.GetChatMessageList
struct UChatWidget_C_GetChatMessageList_Params
{
	class UChatMessageListWidget*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChatWidget.ChatWidget_C.GetChatMessageEditableTextBox
struct UChatWidget_C_GetChatMessageEditableTextBox_Params
{
	class UEditableTextBox*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChatWidget.ChatWidget_C.Construct
struct UChatWidget_C_Construct_Params
{
};

// Function ChatWidget.ChatWidget_C.OnMouseEnter
struct UChatWidget_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ChatWidget.ChatWidget_C.UpdateChatOpacity
struct UChatWidget_C_UpdateChatOpacity_Params
{
};

// Function ChatWidget.ChatWidget_C.BlueprintSetCanEverChat
struct UChatWidget_C_BlueprintSetCanEverChat_Params
{
	bool                                               bCanEverChat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ChatWidget.ChatWidget_C.ExecuteUbergraph_ChatWidget
struct UChatWidget_C_ExecuteUbergraph_ChatWidget_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
