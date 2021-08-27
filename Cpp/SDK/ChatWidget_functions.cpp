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

// Function ChatWidget.ChatWidget_C.GetChatMessageList
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChatMessageListWidget*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UChatMessageListWidget* UChatWidget_C::GetChatMessageList()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.GetChatMessageList");

	UChatWidget_C_GetChatMessageList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChatWidget.ChatWidget_C.GetChatMessageEditableTextBox
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UEditableTextBox*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UEditableTextBox* UChatWidget_C::GetChatMessageEditableTextBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.GetChatMessageEditableTextBox");

	UChatWidget_C_GetChatMessageEditableTextBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChatWidget.ChatWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UChatWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.Construct");

	UChatWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWidget.ChatWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UChatWidget_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.OnMouseEnter");

	UChatWidget_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWidget.ChatWidget_C.UpdateChatOpacity
// (Event, Protected, BlueprintEvent)
void UChatWidget_C::UpdateChatOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.UpdateChatOpacity");

	UChatWidget_C_UpdateChatOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWidget.ChatWidget_C.BlueprintSetCanEverChat
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bCanEverChat                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UChatWidget_C::BlueprintSetCanEverChat(bool bCanEverChat)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.BlueprintSetCanEverChat");

	UChatWidget_C_BlueprintSetCanEverChat_Params params;
	params.bCanEverChat = bCanEverChat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWidget.ChatWidget_C.ExecuteUbergraph_ChatWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatWidget_C::ExecuteUbergraph_ChatWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWidget.ChatWidget_C.ExecuteUbergraph_ChatWidget");

	UChatWidget_C_ExecuteUbergraph_ChatWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
