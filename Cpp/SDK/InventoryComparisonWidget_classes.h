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

// WidgetBlueprintGeneratedClass InventoryComparisonWidget.InventoryComparisonWidget_C
// 0x0028 (FullSize[0x06D0] - InheritedSize[0x06A8])
class UInventoryComparisonWidget_C : public UInventoryComparisonWidget
{
public:
	class UTLWidgetSwitcher*                           ComparisonSwitcher;                                        // 0x06A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryItemTooltip_C*                     EquippedItemTooltip;                                       // 0x06B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPetDetailTooltip_C*                         EquippedPetDetailTooltip;                                  // 0x06B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryItemTooltip_C*                     SelectedItemTooltip;                                       // 0x06C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPetDetailTooltip_C*                         SelectedPetDetailTooltip;                                  // 0x06C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventoryComparisonWidget.InventoryComparisonWidget_C");
		return ptr;
	}



	class UTLWidgetSwitcher* GetComparisonSwitcher();
	class UPetDetailsWidget* GetEquippedPetDetailsWidget();
	class UPetDetailsWidget* GetSelectedPetDetailsWidget();
	class UInventoryItemDetailsWidget* GetEquippedItemDetailsWidget();
	class UInventoryItemDetailsWidget* GetSelectedItemDetailsWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
