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

// Function HUD.HUD_C.GetCanvasPanel
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCanvasPanel*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCanvasPanel* UHUD_C::GetCanvasPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetCanvasPanel");

	UHUD_C_GetCanvasPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HUD.HUD_C.BlueprintGetWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// FrontiersUI_ETLWidget          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UHUD_C::BlueprintGetWidget(FrontiersUI_ETLWidget Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.BlueprintGetWidget");

	UHUD_C_BlueprintGetWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HUD.HUD_C.ShowCenterScreenMessage
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   InMessage                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// FrontiersUI_EUIMessageType     Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bShowOverLoadingScreen         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bOverrideExisting              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHUD_C::ShowCenterScreenMessage(const struct FText& InMessage, FrontiersUI_EUIMessageType Type, float Duration, bool bShowOverLoadingScreen, bool bOverrideExisting)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowCenterScreenMessage");

	UHUD_C_ShowCenterScreenMessage_Params params;
	params.InMessage = InMessage;
	params.Type = Type;
	params.Duration = Duration;
	params.bShowOverLoadingScreen = bShowOverLoadingScreen;
	params.bOverrideExisting = bOverrideExisting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HUD.HUD_C.HideCenterScreenMessage
// (Event, Public, BlueprintEvent)
void UHUD_C::HideCenterScreenMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HideCenterScreenMessage");

	UHUD_C_HideCenterScreenMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HUD.HUD_C.FocusChat
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 StartingCharacters             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UHUD_C::FocusChat(const struct FString& StartingCharacters)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.FocusChat");

	UHUD_C_FocusChat_Params params;
	params.StartingCharacters = StartingCharacters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HUD.HUD_C.HideChat
// (Event, Public, BlueprintEvent)
void UHUD_C::HideChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HideChat");

	UHUD_C_HideChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HUD.HUD_C.UpdateChat
// (Event, Public, BlueprintEvent)
void UHUD_C::UpdateChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.UpdateChat");

	UHUD_C_UpdateChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HUD.HUD_C.ExecuteUbergraph_HUD
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHUD_C::ExecuteUbergraph_HUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ExecuteUbergraph_HUD");

	UHUD_C_ExecuteUbergraph_HUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
