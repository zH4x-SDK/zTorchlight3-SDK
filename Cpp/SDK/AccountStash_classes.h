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

// WidgetBlueprintGeneratedClass AccountStash.AccountStash_C
// 0x0050 (FullSize[0x0FA8] - InheritedSize[0x0F58])
class UAccountStash_C : public UInventoryStashWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0F58(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            show;                                                      // 0x0F60(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHotkeyWidget_C*                             HotkeyWidget;                                              // 0x0F68(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHotkeyWidget_C*                             HotkeyWidget_1;                                            // 0x0F70(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNavigationHeader_C*                         NavigationHeader;                                          // 0x0F78(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStashGridInventory_C*                       StashInventory;                                            // 0x0F80(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTabbedSubMenu_C*                            StashTabMenu;                                              // 0x0F88(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_2;                                                 // 0x0F90(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_3;                                                 // 0x0F98(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTwoPanelInventory_C*                        TwoPanelInventoryWidget;                                   // 0x0FA0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AccountStash.AccountStash_C");
		return ptr;
	}



	class UInventoryStashLoadRetryWidget* GetRetryWidget();
	class UTLWidgetSwitcher* GetStashSwitcher();
	class UWidgetAnimation* GetShowAnimation();
	class UInventoryGridWithTabsWidget* GetInventoryGridWidget();
	class UTabbedMenuWidget* GetInventoryCategoryTabbedMenu();
	class UInventoryItemListWidget* GetInventoryItemListWidget();
	void Construct();
	void ExecuteUbergraph_AccountStash(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
