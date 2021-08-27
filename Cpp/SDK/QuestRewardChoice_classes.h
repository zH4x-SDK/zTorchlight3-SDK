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

// WidgetBlueprintGeneratedClass QuestRewardChoice.QuestRewardChoice_C
// 0x07C8 (FullSize[0x0F68] - InheritedSize[0x07A0])
class UQuestRewardChoice_C : public UQuestRewardWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTLButton*                                   Button;                                                    // 0x07A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGenericResourceWidget_C*                    GenericResourceWidget;                                     // 0x07B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLBorder*                                   TLBorder_1;                                                // 0x07B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCheckBox*                                 TLCheckBox_485;                                            // 0x07C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                                 Highlight;                                                 // 0x07C8(0x0088) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Inactive;                                                  // 0x0850(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                                 HighlightCheck;                                            // 0x08D8(0x0088) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveCheck;                                             // 0x0960(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCheckBoxStyle                              OriginalCheckBox;                                          // 0x09E8(0x0580) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestRewardChoice.QuestRewardChoice_C");
		return ptr;
	}



	class UGenericResourceWidget* GetGenericResourceWidget();
	void UnfocusedCheckbox();
	void FocusedCheckbox();
	void Unfocused();
	void Focused();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void UpdateSelectedUI(bool bCanSelect, bool bIsSelected);
	void Construct();
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__TLCheckBox_484_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void ExecuteUbergraph_QuestRewardChoice(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
