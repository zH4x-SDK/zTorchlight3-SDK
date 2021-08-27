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

// Function PetStoredMenu.PetStoredMenu_C.GetMenuButtonList
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTabbedMenuButtonList*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTabbedMenuButtonList* UPetStoredMenu_C::GetMenuButtonList()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredMenu.PetStoredMenu_C.GetMenuButtonList");

	UPetStoredMenu_C_GetMenuButtonList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredMenu.PetStoredMenu_C.GetMenuHeader
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UPetStoredMenu_C::GetMenuHeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredMenu.PetStoredMenu_C.GetMenuHeader");

	UPetStoredMenu_C_GetMenuHeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredMenu.PetStoredMenu_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UPetStoredMenu_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredMenu.PetStoredMenu_C.GetShowAnimation");

	UPetStoredMenu_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredMenu.PetStoredMenu_C.GetCanvasPanel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCanvasPanel*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCanvasPanel* UPetStoredMenu_C::GetCanvasPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredMenu.PetStoredMenu_C.GetCanvasPanel");

	UPetStoredMenu_C_GetCanvasPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStoredMenu.PetStoredMenu_C.BlueprintOnShown
// (Event, Protected, BlueprintEvent)
void UPetStoredMenu_C::BlueprintOnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredMenu.PetStoredMenu_C.BlueprintOnShown");

	UPetStoredMenu_C_BlueprintOnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PetStoredMenu.PetStoredMenu_C.ExecuteUbergraph_PetStoredMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPetStoredMenu_C::ExecuteUbergraph_PetStoredMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStoredMenu.PetStoredMenu_C.ExecuteUbergraph_PetStoredMenu");

	UPetStoredMenu_C_ExecuteUbergraph_PetStoredMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
