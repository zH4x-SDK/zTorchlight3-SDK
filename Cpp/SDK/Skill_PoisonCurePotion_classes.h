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

// BlueprintGeneratedClass Skill_PoisonCurePotion.Skill_PoisonCurePotion_C
// 0x0008 (FullSize[0x0580] - InheritedSize[0x0578])
class USkill_PoisonCurePotion_C : public USkill_Potion_Master_C
{
public:
	float                                              Health;                                                    // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              health1;                                                   // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Skill_PoisonCurePotion.Skill_PoisonCurePotion_C");
		return ptr;
	}



	struct FText GetSkillDescription(class AActor* Actor, int SkillLevel);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
