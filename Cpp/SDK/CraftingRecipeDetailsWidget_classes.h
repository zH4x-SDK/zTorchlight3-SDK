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

// WidgetBlueprintGeneratedClass CraftingRecipeDetailsWidget.CraftingRecipeDetailsWidget_C
// 0x0049 (FullSize[0x0A09] - InheritedSize[0x09C0])
class UCraftingRecipeDetailsWidget_C : public UCraftingRecipeDetailWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x09C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            show;                                                      // 0x09C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCraftingDetailsWidgetBase_C*                CraftingDetailsWidgetBase;                                 // 0x09D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    EmberSkillWrapper;                                         // 0x09D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEmberWeaponSkills_C*                        EmberWeaponSkills;                                         // 0x09E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_1;                                                 // 0x09E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_2;                                                 // 0x09F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMG_ESlateVisibility                               ActionAreaVisibility;                                      // 0x09F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMG_ESlateVisibility                               DetailsVisibility;                                         // 0x09F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_H5FQ[0x6];                                     // 0x09FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      FrameStyle;                                                // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMG_ESlateVisibility                               RecipeCostsVisibility;                                     // 0x0A08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CraftingRecipeDetailsWidget.CraftingRecipeDetailsWidget_C");
		return ptr;
	}



	class UListWidget* GetActionButtonListWidget();
	class UWidgetAnimation* GetShowAnimation();
	class UWidget* GetEmberWeaponSkillsWrapper();
	class UEmberWeaponSkillsWidget* GetEmberWeaponSkills();
	class UWidgetSwitcher* GetDetailsSwitcher();
	class UTLTextBlock* GetPurchaseDetailsWidget();
	class UTLTextBlock* GetItemRarityTextWidget();
	class UTLTextBlock* GetItemTypeTextWidget();
	class UWidget* GetDetailsPanel();
	class UWidget* GetMainPanel();
	class UGenericResourceWidget* GetCurrencyCostWidget();
	class UTLTextBlock* GetDurationTextBlock();
	class UWidget* GetLongDescriptionContainer();
	class UTLButton* GetCraftButton();
	class UTLTextBlock* GetTitleWidget();
	class UTLTextBlock* GetLongDescriptionWidget();
	class UCraftingCostListWidget* GetCostListWidget();
	class UInventoryItemDetailsWidget* GetItemDetailsWidget();
	void PreConstruct(bool IsDesignTime);
	void BlueprintRefreshCraftingWidget();
	void ExecuteUbergraph_CraftingRecipeDetailsWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
