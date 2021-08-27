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

// Function SocialContextMenu.SocialContextMenu_C.GetAccountNameTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* USocialContextMenu_C::GetAccountNameTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialContextMenu.SocialContextMenu_C.GetAccountNameTextBlock");

	USocialContextMenu_C_GetAccountNameTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SocialContextMenu.SocialContextMenu_C.GetCharacterNameTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* USocialContextMenu_C::GetCharacterNameTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialContextMenu.SocialContextMenu_C.GetCharacterNameTextBlock");

	USocialContextMenu_C_GetCharacterNameTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SocialContextMenu.SocialContextMenu_C.GetDifficultyWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* USocialContextMenu_C::GetDifficultyWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialContextMenu.SocialContextMenu_C.GetDifficultyWidget");

	USocialContextMenu_C_GetDifficultyWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SocialContextMenu.SocialContextMenu_C.GetLevelTextBox
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* USocialContextMenu_C::GetLevelTextBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialContextMenu.SocialContextMenu_C.GetLevelTextBox");

	USocialContextMenu_C_GetLevelTextBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SocialContextMenu.SocialContextMenu_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* USocialContextMenu_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialContextMenu.SocialContextMenu_C.GetShowAnimation");

	USocialContextMenu_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SocialContextMenu.SocialContextMenu_C.GetButtonList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButtonListWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UButtonListWidget* USocialContextMenu_C::GetButtonList()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialContextMenu.SocialContextMenu_C.GetButtonList");

	USocialContextMenu_C_GetButtonList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SocialContextMenu.SocialContextMenu_C.ReportAbuse
// (Event, Protected, BlueprintEvent)
void USocialContextMenu_C::ReportAbuse()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialContextMenu.SocialContextMenu_C.ReportAbuse");

	USocialContextMenu_C_ReportAbuse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SocialContextMenu.SocialContextMenu_C.ExecuteUbergraph_SocialContextMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USocialContextMenu_C::ExecuteUbergraph_SocialContextMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialContextMenu.SocialContextMenu_C.ExecuteUbergraph_SocialContextMenu");

	USocialContextMenu_C_ExecuteUbergraph_SocialContextMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
