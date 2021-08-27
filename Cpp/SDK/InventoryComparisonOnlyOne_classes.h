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

// WidgetBlueprintGeneratedClass InventoryComparisonOnlyOne.InventoryComparisonOnlyOne_C
// 0x0018 (FullSize[0x06C0] - InheritedSize[0x06A8])
class UInventoryComparisonOnlyOne_C : public UInventoryComparisonWidget
{
public:
	class UTLWidgetSwitcher*                           ComparisonSwitcher;                                        // 0x06A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryItemTooltip_C*                     SelectedItemTooltip;                                       // 0x06B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPetDetailTooltip_C*                         SelectedPetTooltip;                                        // 0x06B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventoryComparisonOnlyOne.InventoryComparisonOnlyOne_C");
		return ptr;
	}



	class UTLWidgetSwitcher* GetComparisonSwitcher();
	class UPetDetailsWidget* GetSelectedPetDetailsWidget();
	class UInventoryItemDetailsWidget* GetSelectedItemDetailsWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
