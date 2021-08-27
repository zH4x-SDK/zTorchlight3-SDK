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

// WidgetBlueprintGeneratedClass SkillTierBonusDescription.SkillTierBonusDescription_C
// 0x0018 (FullSize[0x02B8] - InheritedSize[0x02A0])
class USkillTierBonusDescription_C : public USkillTierBonusWidget
{
public:
	class UTLTextBlock*                                Description;                                               // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                PointsRemaining;                                           // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                Title;                                                     // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillTierBonusDescription.SkillTierBonusDescription_C");
		return ptr;
	}



	class UTLTextBlock* GetDescriptionTextBlock();
	class UTLTextBlock* GetPointsRemainingTextBlock();
	class UTLTextBlock* GetTitleTextBlock();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
