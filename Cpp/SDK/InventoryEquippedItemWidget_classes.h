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

// WidgetBlueprintGeneratedClass InventoryEquippedItemWidget.InventoryEquippedItemWidget_C
// 0x0020 (FullSize[0x0688] - InheritedSize[0x0668])
class UInventoryEquippedItemWidget_C : public UInventoryItemEquippedWidget
{
public:
	class UTLBorderHighlightable*                      EmptySlotHighlightable;                                    // 0x0668(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryItemButton_C*                      InventoryItemButton1;                                      // 0x0670(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_1;                                                 // 0x0678(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    SlotIcon;                                                  // 0x0680(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventoryEquippedItemWidget.InventoryEquippedItemWidget_C");
		return ptr;
	}



	class UWidget* GetEmptySlotToolTipWidget();
	class UWidget* GetSlotBGImage();
	class UInventoryItemBaseWidget* GetInventoryItemWidget();
	class UTLImage* GetSlotIconImage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
