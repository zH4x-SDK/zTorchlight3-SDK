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

// Function CraftingQueueRecipes.CraftingQueueRecipes_C.On_CategoryList_GetNextListBinding_1
struct UCraftingQueueRecipes_C_On_CategoryList_GetNextListBinding_1_Params
{
	class UListWidget*                                 CurrentList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SlateCore_EUINavigation                            NavDirection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UListWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CraftingQueueRecipes.CraftingQueueRecipes_C.GetCraftingCategoriesList
struct UCraftingQueueRecipes_C_GetCraftingCategoriesList_Params
{
	class UCraftingCategoryListWidget*                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CraftingQueueRecipes.CraftingQueueRecipes_C.GetShowAnimation
struct UCraftingQueueRecipes_C_GetShowAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CraftingQueueRecipes.CraftingQueueRecipes_C.BlueprintSetLoadingSpinnerEnabled
struct UCraftingQueueRecipes_C_BlueprintSetLoadingSpinnerEnabled_Params
{
	bool                                               bEnabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CraftingQueueRecipes.CraftingQueueRecipes_C.ExecuteUbergraph_CraftingQueueRecipes
struct UCraftingQueueRecipes_C_ExecuteUbergraph_CraftingQueueRecipes_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
