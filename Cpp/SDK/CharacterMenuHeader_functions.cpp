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

// Function CharacterMenuHeader.CharacterMenuHeader_C.GetHideAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UCharacterMenuHeader_C::GetHideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMenuHeader.CharacterMenuHeader_C.GetHideAnimation");

	UCharacterMenuHeader_C_GetHideAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CharacterMenuHeader.CharacterMenuHeader_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UCharacterMenuHeader_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMenuHeader.CharacterMenuHeader_C.GetShowAnimation");

	UCharacterMenuHeader_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CharacterMenuHeader.CharacterMenuHeader_C.GetCanvasPanel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCanvasPanel*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCanvasPanel* UCharacterMenuHeader_C::GetCanvasPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMenuHeader.CharacterMenuHeader_C.GetCanvasPanel");

	UCharacterMenuHeader_C_GetCanvasPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CharacterMenuHeader.CharacterMenuHeader_C.GetMenuButtonList
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTabbedMenuButtonList*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTabbedMenuButtonList* UCharacterMenuHeader_C::GetMenuButtonList()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMenuHeader.CharacterMenuHeader_C.GetMenuButtonList");

	UCharacterMenuHeader_C_GetMenuButtonList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CharacterMenuHeader.CharacterMenuHeader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UCharacterMenuHeader_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMenuHeader.CharacterMenuHeader_C.Construct");

	UCharacterMenuHeader_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CharacterMenuHeader.CharacterMenuHeader_C.ExecuteUbergraph_CharacterMenuHeader
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacterMenuHeader_C::ExecuteUbergraph_CharacterMenuHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMenuHeader.CharacterMenuHeader_C.ExecuteUbergraph_CharacterMenuHeader");

	UCharacterMenuHeader_C_ExecuteUbergraph_CharacterMenuHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
