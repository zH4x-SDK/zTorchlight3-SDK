#pragma once

// Name: Torchlight3, Version: 4.26.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass CraftingRecipes.CraftingRecipes_C
// 0x0020 (FullSize[0x06A0] - InheritedSize[0x0680])
class UCraftingRecipes_C : public URecipesWidget
{
public:
	class UWidgetAnimation*                            ShowSlide;                                                 // 0x0680(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            show;                                                      // 0x0688(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCraftingQueueRecipes_C*                     CraftingQueueRecipes;                                      // 0x0690(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCraftingRecipeDetailsWidget_C*              CraftingRecipeDetailsWidget;                               // 0x0698(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CraftingRecipes.CraftingRecipes_C");
		return ptr;
	}



	class UWidgetAnimation* GetShowAnimation();
	class UCraftingQueueWidget* GetCraftingQueueWidget();
	class UCraftingRecipeDetailWidget* GetDetailsWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
