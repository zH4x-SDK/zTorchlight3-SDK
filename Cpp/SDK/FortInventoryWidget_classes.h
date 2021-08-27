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

// WidgetBlueprintGeneratedClass FortInventoryWidget.FortInventoryWidget_C
// 0x0048 (FullSize[0x0840] - InheritedSize[0x07F8])
class UFortInventoryWidget_C : public UFortInventoryWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Hide;                                                      // 0x0800(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            show;                                                      // 0x0808(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UListWidget*                                 CurrencyList;                                              // 0x0810(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortInventorySidePanel_C*                   FortInventorySidePanel;                                    // 0x0818(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGamepadButtonLegend_C*                      GamepadButtonLegend;                                       // 0x0820(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                MainCanvasPanel;                                           // 0x0828(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNavigationHeader_C*                         NavigationHeader;                                          // 0x0830(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPreviewAnchorWidget_C*                      PreviewAnchorWidget;                                       // 0x0838(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FortInventoryWidget.FortInventoryWidget_C");
		return ptr;
	}



	class UTLTextBlock* GetSelectedSubCategoryTextBlock();
	class UWidget* GetSubMenuPanel();
	class UWidget* GetNoPropsWidget();
	class UListWidget* GetCurrencyListWidget();
	class UWidget* GetSidePanelContainer();
	class UWidgetAnimation* GetHideAnimation();
	class UTabbedMenuWidget* GetSubMenu();
	class UFortPropListWidget* GetFortPropListWidget();
	class UFortPropCraftingWidget* GetCraftingWidget();
	class UCanvasPanel* GetCanvasPanel();
	class UTabbedMenuButtonList* GetMenuButtonList();
	class UWidgetAnimation* GetShowAnimation();
	void BlueprintUpdateSelectedPropDescription(const struct FText& Name, const struct FText& Description, bool bVisible);
	void ExecuteUbergraph_FortInventoryWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
