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

// BlueprintGeneratedClass Skill_GoblinDeath.Skill_GoblinDeath_C
// 0x0001 (FullSize[0x0541] - InheritedSize[0x0540])
class USkill_GoblinDeath_C : public USkill_Death_C
{
public:
	Frontiers_ESkillSlot                               FearSkillSlot;                                             // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Skill_GoblinDeath.Skill_GoblinDeath_C");
		return ptr;
	}



	void OnSkillActorOverlap(class AActor* Instigator, class AActor* Actor, class ASkillShape* Shape, bool bIsPrimaryTarget, int SkillInstanceId);
	void OnActorDeath(class AActor* Actor, class AActor* Attacker);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
