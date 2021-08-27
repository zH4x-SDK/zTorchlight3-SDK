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

// Function TabbedSubMenu.TabbedSubMenu_C.GetMenuButtonList
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTabbedMenuButtonList*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTabbedMenuButtonList* UTabbedSubMenu_C::GetMenuButtonList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabbedSubMenu.TabbedSubMenu_C.GetMenuButtonList");

	UTabbedSubMenu_C_GetMenuButtonList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TabbedSubMenu.TabbedSubMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTabbedSubMenu_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabbedSubMenu.TabbedSubMenu_C.PreConstruct");

	UTabbedSubMenu_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TabbedSubMenu.TabbedSubMenu_C.ExecuteUbergraph_TabbedSubMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTabbedSubMenu_C::ExecuteUbergraph_TabbedSubMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabbedSubMenu.TabbedSubMenu_C.ExecuteUbergraph_TabbedSubMenu");

	UTabbedSubMenu_C_ExecuteUbergraph_TabbedSubMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
