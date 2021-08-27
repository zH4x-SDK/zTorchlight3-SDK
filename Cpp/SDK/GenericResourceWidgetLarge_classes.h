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

// WidgetBlueprintGeneratedClass GenericResourceWidgetLarge.GenericResourceWidgetLarge_C
// 0x0018 (FullSize[0x0868] - InheritedSize[0x0850])
class UGenericResourceWidgetLarge_C : public UGenericResourceWidget
{
public:
	class UCurrencyCostLarge_C*                        CurrencyCostLarge;                                         // 0x0850(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCurrencyWidget_Small_C*                     CurrencyWidget_Small;                                      // 0x0858(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                          // 0x0860(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GenericResourceWidgetLarge.GenericResourceWidgetLarge_C");
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
