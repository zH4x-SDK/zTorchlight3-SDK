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

// Function PetDisplayMenu.PetDisplayMenu_C.GetMenuButtonList
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTabbedMenuButtonList*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTabbedMenuButtonList* UPetDisplayMenu_C::GetMenuButtonList()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDisplayMenu.PetDisplayMenu_C.GetMenuButtonList");

	UPetDisplayMenu_C_GetMenuButtonList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetDisplayMenu.PetDisplayMenu_C.GetMenuHeader
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UPetDisplayMenu_C::GetMenuHeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDisplayMenu.PetDisplayMenu_C.GetMenuHeader");

	UPetDisplayMenu_C_GetMenuHeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetDisplayMenu.PetDisplayMenu_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UPetDisplayMenu_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDisplayMenu.PetDisplayMenu_C.GetShowAnimation");

	UPetDisplayMenu_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetDisplayMenu.PetDisplayMenu_C.GetCanvasPanel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCanvasPanel*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCanvasPanel* UPetDisplayMenu_C::GetCanvasPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDisplayMenu.PetDisplayMenu_C.GetCanvasPanel");

	UPetDisplayMenu_C_GetCanvasPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetDisplayMenu.PetDisplayMenu_C.BlueprintOnShown
// (Event, Protected, BlueprintEvent)
void UPetDisplayMenu_C::BlueprintOnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDisplayMenu.PetDisplayMenu_C.BlueprintOnShown");

	UPetDisplayMenu_C_BlueprintOnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PetDisplayMenu.PetDisplayMenu_C.ExecuteUbergraph_PetDisplayMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPetDisplayMenu_C::ExecuteUbergraph_PetDisplayMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDisplayMenu.PetDisplayMenu_C.ExecuteUbergraph_PetDisplayMenu");

	UPetDisplayMenu_C_ExecuteUbergraph_PetDisplayMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
