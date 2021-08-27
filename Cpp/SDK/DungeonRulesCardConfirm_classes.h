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

// WidgetBlueprintGeneratedClass DungeonRulesCardConfirm.DungeonRulesCardConfirm_C
// 0x0048 (FullSize[0x0998] - InheritedSize[0x0950])
class UDungeonRulesCardConfirm_C : public UDungeonChallengeRulesCard
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0950(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            RaysLoop;                                                  // 0x0958(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            HoverLoop;                                                 // 0x0960(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            show;                                                      // 0x0968(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UDungeonCardFrontShared_C*                   DungeonCardArtShared;                                      // 0x0970(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    FancyGlowImage;                                            // 0x0978(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    glow;                                                      // 0x0980(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_230;                                               // 0x0988(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_263;                                               // 0x0990(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DungeonRulesCardConfirm.DungeonRulesCardConfirm_C");
		return ptr;
	}



	void SequenceEvent__ENTRYPOINTDungeonRulesCardConfirm_1();
	void SequenceEvent_1();
	class UTLImage* GetBossImage();
	class UTLWidgetSwitcher* GetBossCardFrontSwitcher();
	class UWidget* GetBossCardFrontContainer();
	class UWidget* GetRegularCardFrontContainer();
	class UTLRichTextBlock* GetBossNameTextBlock();
	TArray<class UDungeonChallengeRuleListWidget*> GetBenefitRuleListWidgets();
	TArray<class UTLImage*> GetPrimaryElementImages();
	TArray<class UDungeonChallengeRuleListWidget*> GetChallengeRuleListWidgets();
	class UTLImage* GetMonsterPopulationImage();
	class UTLWidgetSwitcher* GetQualityFrontSwitcher();
	class UWidgetAnimation* GetShowAnimation();
	class UTLRichTextBlock* GetAreaNameTextBlock();
	void Construct();
	void ExecuteUbergraph_DungeonRulesCardConfirm(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
