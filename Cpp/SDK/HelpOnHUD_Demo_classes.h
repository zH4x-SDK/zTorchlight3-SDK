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

// WidgetBlueprintGeneratedClass HelpOnHUD_Demo.HelpOnHUD_Demo_C
// 0x0048 (FullSize[0x0880] - InheritedSize[0x0838])
class UHelpOnHUD_Demo_C : public UHelpTabbedMenu
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0838(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBasicHeader_C*                              BasicHeader;                                               // 0x0840(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGamepadButtonLegend_C*                      GamepadButtonLegend;                                       // 0x0848(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                HelpButtonsPanel;                                          // 0x0850(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTabbedMenuButtonList*                       HelpCategoriesList;                                        // 0x0858(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                MainCanvasPanel;                                           // 0x0860(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLBorder*                                   OuterFrame;                                                // 0x0868(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                SlotCanvasPanel;                                           // 0x0870(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStyle_CloseButton_C*                        Style_CloseButton;                                         // 0x0878(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HelpOnHUD_Demo.HelpOnHUD_Demo_C");
		return ptr;
	}



	class UCanvasPanel* GetCanvasPanel();
	class UTabbedMenuButtonList* GetMenuButtonList();
	void BlueprintOnOptionSelected(const struct FTabbedMenuOption& Option);
	void BndEvt__Style_CloseButton_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
	void ExecuteUbergraph_HelpOnHUD_Demo(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
