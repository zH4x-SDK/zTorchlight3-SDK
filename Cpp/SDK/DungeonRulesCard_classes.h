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

// WidgetBlueprintGeneratedClass DungeonRulesCard.DungeonRulesCard_C
// 0x0060 (FullSize[0x09B0] - InheritedSize[0x0950])
class UDungeonRulesCard_C : public UDungeonChallengeRulesCard
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0950(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            ShowHide;                                                  // 0x0958(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Hover;                                                     // 0x0960(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            StartFocus;                                                // 0x0968(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            CardFlip;                                                  // 0x0970(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLButton*                                   CardBackButton;                                            // 0x0978(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLButton*                                   CardButton;                                                // 0x0980(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLWidgetSwitcher*                           CardStateSwitcher;                                         // 0x0988(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDungeonCardBackShared_C*                    DungeonCardBackShared;                                     // 0x0990(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDungeonCardFrontShared_C*                   DungeonCardFrontShared;                                    // 0x0998(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    glow;                                                      // 0x09A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    glow2;                                                     // 0x09A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DungeonRulesCard.DungeonRulesCard_C");
		return ptr;
	}



	class UTLWidgetSwitcher* GetBossCardBackSwitcher();
	class UWidget* GetBossCardBackContainer();
	class UWidget* GetRegularCardBackContainer();
	class UTLImage* GetBossImage();
	class UTLWidgetSwitcher* GetBossCardFrontSwitcher();
	class UWidget* GetBossCardFrontContainer();
	class UWidget* GetRegularCardFrontContainer();
	TArray<class UDungeonChallengeRuleListWidget*> GetBenefitRuleListWidgets();
	class UTLRichTextBlock* GetBossNameTextBlock();
	TArray<class UTLImage*> GetPrimaryElementImages();
	TArray<class UDungeonChallengeRuleListWidget*> GetChallengeRuleListWidgets();
	class UWidgetAnimation* GetFocusAnimation();
	class UWidget* GetRulesContainerWidget();
	class UTLImage* GetMonsterPopulationImage();
	class UWidgetAnimation* GetShowAnimation();
	class UTLWidgetSwitcher* GetQualityFrontSwitcher();
	class UWidgetAnimation* GetStartFocusAnimation();
	class UTLWidgetSwitcher* GetCardStateSwitcher();
	class UWidgetAnimation* GetFlipToFrontAnimation();
	class UTLRichTextBlock* GetAreaNameTextBlock();
	void Construct();
	void BndEvt__CardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CardBackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_DungeonRulesCard(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
