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

// WidgetBlueprintGeneratedClass PetDisplayInventory.PetDisplayInventory_C
// 0x00B8 (FullSize[0x0818] - InheritedSize[0x0760])
class UPetDisplayInventory_C : public UPetDisplayInventoryWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0760(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            RarityTitleFadein;                                         // 0x0768(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Intro;                                                     // 0x0770(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                                ActivePetBox;                                              // 0x0778(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasicHeader_C*                              ActivePetHeader;                                           // 0x0780(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPetStoredListWidget*                        ActivePetList;                                             // 0x0788(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLScrollBox*                                ActiveScrollBox;                                           // 0x0790(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLWidgetSwitcher*                           HasPetsSwitcher;                                           // 0x0798(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLScrollBox*                                InactiveScrollBox;                                         // 0x07A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                NoActivePetText;                                           // 0x07A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                NoInactivePetText;                                         // 0x07B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                NoPetsText;                                                // 0x07B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPetDetailsWidget_C*                         PetDetailsWidget;                                          // 0x07C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                PetListWidgets;                                            // 0x07C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPreviewAnchorWidget_C*                      PreviewAnchorWidget;                                       // 0x07D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                SortTitle;                                                 // 0x07D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                StoredPetBox;                                              // 0x07E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasicHeader_C*                              StoredPetHeader;                                           // 0x07E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPetStoredListWidget*                        StoredPets;                                                // 0x07F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLWidgetSwitcher*                           Switcher;                                                  // 0x07F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLButton*                                   TLButton_2;                                                // 0x0800(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_2;                                                 // 0x0808(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_186;                                               // 0x0810(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PetDisplayInventory.PetDisplayInventory_C");
		return ptr;
	}



	class UWidgetAnimation* GetSortedAnimation();
	class UTLTextBlock* GetSortText();
	class UWidgetAnimation* GetShowAnimation();
	class UScrollBox* GetActivePetScrollBox();
	class UScrollBox* GetStoredPetScrollBox();
	class UListWidget* On_StoredPets_GetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection);
	class UListWidget* On_ActivePetList_GetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection);
	class UWidget* GetListedPets();
	class UPetStoredListWidget* GetActivePetStoredListWidget();
	class UPetDetailsWidget* GetDetailsWidget();
	class UTLWidgetSwitcher* GetSwitcher();
	class UPetStoredListWidget* GetPetStoredListWidget();
	void UpdateSectionVisibility(bool bHasActivePets, bool bHasInactivePets);
	void BndEvt__TLButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_PetDisplayInventory(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
