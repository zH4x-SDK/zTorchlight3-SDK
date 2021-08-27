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

// WidgetBlueprintGeneratedClass SkillLevelBonusDescription.SkillLevelBonusDescription_C
// 0x0020 (FullSize[0x0280] - InheritedSize[0x0260])
class USkillLevelBonusDescription_C : public USkillLevelBonusWidget
{
public:
	class UTLTextBlock*                                BonusDescription;                                          // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                CurrentLevelBonus;                                         // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                NextLevelBonus;                                            // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLBorder*                                   ZebraStripe;                                               // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillLevelBonusDescription.SkillLevelBonusDescription_C");
		return ptr;
	}



	class UWidget* GetZebraStripeBackground();
	class UTLTextBlock* GetBonusDescriptionWidget();
	class UTLTextBlock* GetBonusNumberTextWidget();
	class UTLTextBlock* GetNextBonusNumberTextWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
