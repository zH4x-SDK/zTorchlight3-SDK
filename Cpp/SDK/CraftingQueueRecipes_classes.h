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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass CraftingQueueRecipes.CraftingQueueRecipes_C
// 0x0048 (FullSize[0x0708] - InheritedSize[0x06C0])
class UCraftingQueueRecipes_C : public UCraftingQueueWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            show;                                                      // 0x06C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCraftingCategoryListWidget*                 CategoryList;                                              // 0x06D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDivider_C*                                  Divider;                                                   // 0x06D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    FiligreeLeft;                                              // 0x06E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    FiligreeRight;                                             // 0x06E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULoadingSpinner_C*                           LoadingSpinner;                                            // 0x06F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLWidgetSwitcher*                           LoadingWidgetSwitcher;                                     // 0x06F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                SkillCategoryHeader;                                       // 0x0700(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CraftingQueueRecipes.CraftingQueueRecipes_C");
		return ptr;
	}



	class UListWidget* On_CategoryList_GetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection);
	class UCraftingCategoryListWidget* GetCraftingCategoriesList();
	class UWidgetAnimation* GetShowAnimation();
	void BlueprintSetLoadingSpinnerEnabled(bool bEnabled);
	void ExecuteUbergraph_CraftingQueueRecipes(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
