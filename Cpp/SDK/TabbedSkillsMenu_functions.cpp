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

// Function TabbedSkillsMenu.TabbedSkillsMenu_C.GetMenuButtonList
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTabbedMenuButtonList*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTabbedMenuButtonList* UTabbedSkillsMenu_C::GetMenuButtonList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabbedSkillsMenu.TabbedSkillsMenu_C.GetMenuButtonList");

	UTabbedSkillsMenu_C_GetMenuButtonList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TabbedSkillsMenu.TabbedSkillsMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTabbedSkillsMenu_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabbedSkillsMenu.TabbedSkillsMenu_C.PreConstruct");

	UTabbedSkillsMenu_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TabbedSkillsMenu.TabbedSkillsMenu_C.ExecuteUbergraph_TabbedSkillsMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTabbedSkillsMenu_C::ExecuteUbergraph_TabbedSkillsMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabbedSkillsMenu.TabbedSkillsMenu_C.ExecuteUbergraph_TabbedSkillsMenu");

	UTabbedSkillsMenu_C_ExecuteUbergraph_TabbedSkillsMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
