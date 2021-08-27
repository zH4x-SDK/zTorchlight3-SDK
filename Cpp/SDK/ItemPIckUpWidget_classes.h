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

// WidgetBlueprintGeneratedClass ItemPIckUpWidget.ItemPIckUpWidget_C
// 0x0030 (FullSize[0x08D0] - InheritedSize[0x08A0])
class UItemPIckUpWidget_C : public UInventoryItemPickUpWidget
{
public:
	class UWidgetAnimation*                            HidePickUpAnimation;                                       // 0x08A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            NormalPickUpAnimation;                                     // 0x08A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLImage*                                    BGFrame;                                                   // 0x08B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    ElementImage;                                              // 0x08B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryItemIcon_C*                        InventoryItemIcon;                                         // 0x08C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                ItemNameTextBlock;                                         // 0x08C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemPIckUpWidget.ItemPIckUpWidget_C");
		return ptr;
	}



	class UInventoryItemBaseWidget* GetItemIconWidget();
	class UTLImage* GetElementIconImage();
	class UWidgetAnimation* GetShowAnimation();
	class UWidgetAnimation* GetHideAnimation();
	class UTLImage* GetItemIconImage();
	struct FSlateBrush GetBrush_1();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
