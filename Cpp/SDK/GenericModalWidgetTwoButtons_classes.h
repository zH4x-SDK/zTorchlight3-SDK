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

// WidgetBlueprintGeneratedClass GenericModalWidgetTwoButtons.GenericModalWidgetTwoButtons_C
// 0x00A8 (FullSize[0x0840] - InheritedSize[0x0798])
class UGenericModalWidgetTwoButtons_C : public UGenericModalWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0798(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            show;                                                      // 0x07A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLButton*                                   AcceptButton;                                              // 0x07A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                AcceptButtonText;                                          // 0x07B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UModalFrame_C*                               BaseModalWidget;                                           // 0x07B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                             Blur;                                                      // 0x07C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLRichTextBlock*                            BodyText;                                                  // 0x07C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    ContentPanel;                                              // 0x07D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                ErrorText;                                                 // 0x07D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGamepadButtonLegend_C*                      GamepadButtonLegend;                                       // 0x07E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              HorizontalBox_2;                                           // 0x07E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLButton*                                   RejectButton;                                              // 0x07F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                RejectButtonText;                                          // 0x07F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLButton*                                   SpecialActionButton;                                       // 0x0800(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                SpecialActionText;                                         // 0x0808(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       DefaultBodyText;                                           // 0x0810(0x0018) (Edit, BlueprintVisible)
	struct FText                                       DefaultTitleText;                                          // 0x0828(0x0018) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GenericModalWidgetTwoButtons.GenericModalWidgetTwoButtons_C");
		return ptr;
	}



	class UTextLayoutWidget* GetErrorMessageTextBlock();
	class UWidgetAnimation* GetShowAnimation();
	void SetBodyText(const struct FText& Text);
	void SetTitleText(const struct FText& Text);
	class UPanelWidget* GetContentPanel();
	class UTextBlock* GetAcceptButtonTextBlock();
	class UTextBlock* GetRejectButtonTextBlock();
	class UTextLayoutWidget* GetBodyTextBlock();
	class UTextLayoutWidget* GetTitleTextBlock();
	void BndEvt__BaseModalWidget_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature();
	void BndEvt__TLButton_0_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__RejectButton2_K2Node_ComponentBoundEvent_169_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetCloseButtonVisibility(UMG_ESlateVisibility InVisibility);
	void BndEvt__SpecialActionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BlueprintOnHidden();
	void ExecuteUbergraph_GenericModalWidgetTwoButtons(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
