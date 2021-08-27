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

// Function NavigationHeader.NavigationHeader_C.GetButtonList
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UNavigationHeader_C::GetButtonList()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationHeader.NavigationHeader_C.GetButtonList");

	UNavigationHeader_C_GetButtonList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationHeader.NavigationHeader_C.GetCloseMenuButtonVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UNavigationHeader_C::GetCloseMenuButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationHeader.NavigationHeader_C.GetCloseMenuButtonVisibility");

	UNavigationHeader_C_GetCloseMenuButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationHeader.NavigationHeader_C.GetMenuButtonList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTabbedMenuButtonList*   MenuButtonList                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNavigationHeader_C::GetMenuButtonList(class UTabbedMenuButtonList** MenuButtonList)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationHeader.NavigationHeader_C.GetMenuButtonList");

	UNavigationHeader_C_GetMenuButtonList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuButtonList != nullptr)
		*MenuButtonList = params.MenuButtonList;

}


// Function NavigationHeader.NavigationHeader_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UNavigationHeader_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationHeader.NavigationHeader_C.PreConstruct");

	UNavigationHeader_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NavigationHeader.NavigationHeader_C.BlueprintOnShown
// (Event, Protected, BlueprintEvent)
void UNavigationHeader_C::BlueprintOnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationHeader.NavigationHeader_C.BlueprintOnShown");

	UNavigationHeader_C_BlueprintOnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NavigationHeader.NavigationHeader_C.ExecuteUbergraph_NavigationHeader
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNavigationHeader_C::ExecuteUbergraph_NavigationHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationHeader.NavigationHeader_C.ExecuteUbergraph_NavigationHeader");

	UNavigationHeader_C_ExecuteUbergraph_NavigationHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
