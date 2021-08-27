#pragma once

// Name: Torchlight3, Version: 1.0.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function NavigationHeader.NavigationHeader_C.GetButtonList
struct UNavigationHeader_C_GetButtonList_Params
{
	class UListWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NavigationHeader.NavigationHeader_C.GetCloseMenuButtonVisibility
struct UNavigationHeader_C_GetCloseMenuButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NavigationHeader.NavigationHeader_C.GetMenuButtonList
struct UNavigationHeader_C_GetMenuButtonList_Params
{
	class UTabbedMenuButtonList*                       MenuButtonList;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NavigationHeader.NavigationHeader_C.PreConstruct
struct UNavigationHeader_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NavigationHeader.NavigationHeader_C.BlueprintOnShown
struct UNavigationHeader_C_BlueprintOnShown_Params
{
};

// Function NavigationHeader.NavigationHeader_C.ExecuteUbergraph_NavigationHeader
struct UNavigationHeader_C_ExecuteUbergraph_NavigationHeader_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
