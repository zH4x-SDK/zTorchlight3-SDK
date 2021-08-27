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

// WidgetBlueprintGeneratedClass DungeonSingleRuleBoss.DungeonSingleRuleBoss_C
// 0x0008 (FullSize[0x0678] - InheritedSize[0x0670])
class UDungeonSingleRuleBoss_C : public UDungeonChallengeRuleWidget
{
public:
	class UTLRichTextBlock*                            RuleTitle;                                                 // 0x0670(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DungeonSingleRuleBoss.DungeonSingleRuleBoss_C");
		return ptr;
	}



	class UTLRichTextBlock* GetAffixTitleTextBlock();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
