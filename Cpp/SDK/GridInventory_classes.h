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

// WidgetBlueprintGeneratedClass GridInventory.GridInventory_C
// 0x0080 (FullSize[0x0938] - InheritedSize[0x08B8])
class UGridInventory_C : public UInventoryWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x08B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            show;                                                      // 0x08C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLCheckBox*                                 CheckBox;                                                  // 0x08C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    CheckboxFrame;                                             // 0x08D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryItemEquippedListWidget*            EquippedGear;                                              // 0x08D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryItemEquippedListWidget*            EquippedWeapons;                                           // 0x08E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGamepadButtonLegend_C*                      GamepadButtonLegend;                                       // 0x08E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryGridWithTabs_C*                    InventoryGridWithTabs;                                     // 0x08F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryItemEquippedListWidget*            PetItems;                                                  // 0x08F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerInfo_C*                               PlayerInfo;                                                // 0x0900(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USmallHeader_C*                              SmallHeader_C_1;                                           // 0x0908(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USmallHeader_C*                              SmallHeader_C_5;                                           // 0x0910(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStatPopup_C*                                StatPopup;                                                 // 0x0918(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLButton*                                   StatsButton;                                               // 0x0920(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                TagSwapCTA;                                                // 0x0928(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFloatingGamepadButtonAction_C*              ToggleStatsFloatingAction;                                 // 0x0930(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GridInventory.GridInventory_C");
		return ptr;
	}



	class UPlayerInfoWidget* GetPlayerInfoWidget();
	class UListWidget* PetItemsGetNextList(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection);
	class UInventoryItemEquippedListWidget* GetPetItemsWidget();
	class UListWidget* OnGetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection);
	class UListWidget* GetInventoryGridList();
	class UInventoryGridWithTabsWidget* GetInventoryGridWidget();
	class UListWidget* ResourcesGetNextList(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection);
	class UListWidget* WeaponsGetNextList(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection);
	class UListWidget* GearGetNextList(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection);
	class UTLUserWidget* GetStatsPanel();
	class UInventoryItemEquippedListWidget* GetEquippedGearWidget();
	class UInventoryItemEquippedListWidget* GetEquippedWeaponsWidget();
	class UWidgetAnimation* GetShowAnimation();
	void Construct();
	void BndEvt__StatsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BlueprintSetSelectMode(bool SelectMode);
	void ExecuteUbergraph_GridInventory(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
