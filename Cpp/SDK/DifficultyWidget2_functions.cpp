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

// Function DifficultyWidget2.DifficultyWidget2_C.DeselectUI
// (Public, BlueprintCallable, BlueprintEvent)
void UDifficultyWidget2_C::DeselectUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function DifficultyWidget2.DifficultyWidget2_C.DeselectUI");

	UDifficultyWidget2_C_DeselectUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DifficultyWidget2.DifficultyWidget2_C.SelectUI
// (Public, BlueprintCallable, BlueprintEvent)
void UDifficultyWidget2_C::SelectUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function DifficultyWidget2.DifficultyWidget2_C.SelectUI");

	UDifficultyWidget2_C_SelectUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DifficultyWidget2.DifficultyWidget2_C.UnhoverUI
// (Public, BlueprintCallable, BlueprintEvent)
void UDifficultyWidget2_C::UnhoverUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function DifficultyWidget2.DifficultyWidget2_C.UnhoverUI");

	UDifficultyWidget2_C_UnhoverUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DifficultyWidget2.DifficultyWidget2_C.HoverUI
// (Public, BlueprintCallable, BlueprintEvent)
void UDifficultyWidget2_C::HoverUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function DifficultyWidget2.DifficultyWidget2_C.HoverUI");

	UDifficultyWidget2_C_HoverUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DifficultyWidget2.DifficultyWidget2_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UDifficultyWidget2_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DifficultyWidget2.DifficultyWidget2_C.OnFocusReceived");

	UDifficultyWidget2_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DifficultyWidget2.DifficultyWidget2_C.GetBackgroundWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UDifficultyWidget2_C::GetBackgroundWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DifficultyWidget2.DifficultyWidget2_C.GetBackgroundWidget");

	UDifficultyWidget2_C_GetBackgroundWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DifficultyWidget2.DifficultyWidget2_C.GetFrameWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLBorder*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLBorder* UDifficultyWidget2_C::GetFrameWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DifficultyWidget2.DifficultyWidget2_C.GetFrameWidget");

	UDifficultyWidget2_C_GetFrameWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DifficultyWidget2.DifficultyWidget2_C.GetHighlightShieldWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UDifficultyWidget2_C::GetHighlightShieldWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DifficultyWidget2.DifficultyWidget2_C.GetHighlightShieldWidget");

	UDifficultyWidget2_C_GetHighlightShieldWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DifficultyWidget2.DifficultyWidget2_C.GetShieldWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UDifficultyWidget2_C::GetShieldWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DifficultyWidget2.DifficultyWidget2_C.GetShieldWidget");

	UDifficultyWidget2_C_GetShieldWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DifficultyWidget2.DifficultyWidget2_C.GetShoulderWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UDifficultyWidget2_C::GetShoulderWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DifficultyWidget2.DifficultyWidget2_C.GetShoulderWidget");

	UDifficultyWidget2_C_GetShoulderWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DifficultyWidget2.DifficultyWidget2_C.GetLastDifficultyWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UDifficultyWidget2_C::GetLastDifficultyWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DifficultyWidget2.DifficultyWidget2_C.GetLastDifficultyWidget");

	UDifficultyWidget2_C_GetLastDifficultyWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DifficultyWidget2.DifficultyWidget2_C.GetDifficultyDescription
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTextLayoutWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextLayoutWidget* UDifficultyWidget2_C::GetDifficultyDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function DifficultyWidget2.DifficultyWidget2_C.GetDifficultyDescription");

	UDifficultyWidget2_C_GetDifficultyDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DifficultyWidget2.DifficultyWidget2_C.GetDifficultyName
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTextLayoutWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextLayoutWidget* UDifficultyWidget2_C::GetDifficultyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function DifficultyWidget2.DifficultyWidget2_C.GetDifficultyName");

	UDifficultyWidget2_C_GetDifficultyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DifficultyWidget2.DifficultyWidget2_C.UpdateUI
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FLinearColor            DifficultyColor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDifficultyWidget2_C::UpdateUI(const struct FLinearColor& DifficultyColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DifficultyWidget2.DifficultyWidget2_C.UpdateUI");

	UDifficultyWidget2_C_UpdateUI_Params params;
	params.DifficultyColor = DifficultyColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DifficultyWidget2.DifficultyWidget2_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UDifficultyWidget2_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DifficultyWidget2.DifficultyWidget2_C.OnMouseEnter");

	UDifficultyWidget2_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DifficultyWidget2.DifficultyWidget2_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UDifficultyWidget2_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DifficultyWidget2.DifficultyWidget2_C.OnMouseLeave");

	UDifficultyWidget2_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DifficultyWidget2.DifficultyWidget2_C.SelectWidgetUI
// (Event, Protected, BlueprintEvent)
void UDifficultyWidget2_C::SelectWidgetUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function DifficultyWidget2.DifficultyWidget2_C.SelectWidgetUI");

	UDifficultyWidget2_C_SelectWidgetUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DifficultyWidget2.DifficultyWidget2_C.DeselectWidgetUI
// (Event, Protected, BlueprintEvent)
void UDifficultyWidget2_C::DeselectWidgetUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function DifficultyWidget2.DifficultyWidget2_C.DeselectWidgetUI");

	UDifficultyWidget2_C_DeselectWidgetUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DifficultyWidget2.DifficultyWidget2_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UDifficultyWidget2_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DifficultyWidget2.DifficultyWidget2_C.OnFocusLost");

	UDifficultyWidget2_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DifficultyWidget2.DifficultyWidget2_C.ExecuteUbergraph_DifficultyWidget2
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDifficultyWidget2_C::ExecuteUbergraph_DifficultyWidget2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DifficultyWidget2.DifficultyWidget2_C.ExecuteUbergraph_DifficultyWidget2");

	UDifficultyWidget2_C_ExecuteUbergraph_DifficultyWidget2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
