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

// WidgetBlueprintGeneratedClass SkillDescriptionSimple.SkillDescriptionSimple_C
// 0x0030 (FullSize[0x0710] - InheritedSize[0x06E0])
class USkillDescriptionSimple_C : public USkillDescriptionWidget
{
public:
	class USkillLevelBonusListWidget*                  BonusList;                                                 // 0x06E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                Cooldown;                                                  // 0x06E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                DescriptionText;                                           // 0x06F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                EnergyCost;                                                // 0x06F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                HeaderText;                                                // 0x0700(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillDisplayScalableWidget_C*               SkillDisplayScalableWidget;                                // 0x0708(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillDescriptionSimple.SkillDescriptionSimple_C");
		return ptr;
	}



	class USkillDisplayWidget* GetSkillDisplayWidget();
	class USkillLevelBonusListWidget* GetLevelBonusListWidget();
	class UTLTextBlock* GetCooldownText();
	class UTLTextBlock* GetEnergyCostText();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
