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

// WidgetBlueprintGeneratedClass DungeonSingleRuleBenefit.DungeonSingleRuleBenefit_C
// 0x0018 (FullSize[0x0688] - InheritedSize[0x0670])
class UDungeonSingleRuleBenefit_C : public UDungeonChallengeRuleWidget
{
public:
	class UTLRichTextBlock*                            RuleDescription;                                           // 0x0670(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLRichTextBlock*                            RuleTitle;                                                 // 0x0678(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_148;                                               // 0x0680(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DungeonSingleRuleBenefit.DungeonSingleRuleBenefit_C");
		return ptr;
	}



	class UTLRichTextBlock* GetAffixTextDescriptionBlock();
	class UTLRichTextBlock* GetAffixTitleTextBlock();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
