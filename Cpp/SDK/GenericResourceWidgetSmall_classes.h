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

// WidgetBlueprintGeneratedClass GenericResourceWidgetSmall.GenericResourceWidgetSmall_C
// 0x0020 (FullSize[0x0870] - InheritedSize[0x0850])
class UGenericResourceWidgetSmall_C : public UGenericResourceWidget
{
public:
	class UCurrencyWidget_Small_C*                     CurrencyWidget_Small;                                      // 0x0850(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCurrencyCost_Small_C*                       TinyCurrencyCost;                                          // 0x0858(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTinyInventoryItem_C*                        TinyInventoryItem;                                         // 0x0860(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                          // 0x0868(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GenericResourceWidgetSmall.GenericResourceWidgetSmall_C");
		return ptr;
	}



	class UInventoryItemCostWidget* GetItemCostWidget();
	class UCurrencyCostWidget* GetCurrencyCostWidget();
	class UCurrencyWidget* GetCurrencyWidget();
	class UInventoryItemBaseWidget* GetItemWidget();
	class UWidgetSwitcher* GetSwitcher();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
