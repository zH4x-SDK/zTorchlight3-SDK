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

// WidgetBlueprintGeneratedClass DungeonClusterRules.DungeonClusterRules_C
// 0x0038 (FullSize[0x0750] - InheritedSize[0x0718])
class UDungeonClusterRules_C : public UDungeonClusterWidget
{
public:
	class UWidgetAnimation*                            show;                                                      // 0x0718(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLRichTextBlock*                            ClusterTitle;                                              // 0x0720(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                EmptyText;                                                 // 0x0728(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDungeonChallengeRuleListWidget*             RulesContainer;                                            // 0x0730(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLWidgetSwitcher*                           RulesSwitcher;                                             // 0x0738(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_105;                                               // 0x0740(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_107;                                               // 0x0748(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DungeonClusterRules.DungeonClusterRules_C");
		return ptr;
	}



	class UWidget* GetRulesContainerWidget();
	class UWidget* GetRulesEmptyWidget();
	class UTLWidgetSwitcher* GetRulesEmptySwitcher();
	class UWidgetAnimation* GetShowAnimation();
	class UTLRichTextBlock* GetRulesTitleText();
	class UDungeonChallengeRuleListWidget* GetRulesList();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
