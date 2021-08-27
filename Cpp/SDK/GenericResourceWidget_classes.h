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

// WidgetBlueprintGeneratedClass GenericResourceWidget.GenericResourceWidget_C
// 0x0051 (FullSize[0x08A1] - InheritedSize[0x0850])
class UGenericResourceWidget_C : public UGenericResourceWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0850(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCurrencyCostWidget_C*                       CurrencyCostWidget;                                        // 0x0858(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCurrencyWidget_C*                           CurrencyWidget;                                            // 0x0860(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortPropIconWidget_C*                       FortPropIconWidget;                                        // 0x0868(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  InnerContent;                                              // 0x0870(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryItemCost_C*                        InventoryItemCost;                                         // 0x0878(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryItemIcon_C*                        InventoryItemIcon;                                         // 0x0880(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemSpawnWidget_C*                          ItemSpawnWidget;                                           // 0x0888(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPetRecipeUnitWidget_C*                      PetRecipeUnitWidget;                                       // 0x0890(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLWidgetSwitcher*                           WidgetSwitcher;                                            // 0x0898(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               ShowName;                                                  // 0x08A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GenericResourceWidget.GenericResourceWidget_C");
		return ptr;
	}



	class UItemSpawnWidget* GetItemSpawnWidget();
	class UPetIconWidget* GetMinionWidget();
	class UFortPropIconWidget* GetFortPropWidget();
	void RefreshName();
	class UInventoryItemCostWidget* GetItemCostWidget();
	class UCurrencyCostWidget* GetCurrencyCostWidget();
	class UCurrencyWidget* GetCurrencyWidget();
	class UInventoryItemBaseWidget* GetItemWidget();
	class UWidgetSwitcher* GetSwitcher();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_GenericResourceWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
