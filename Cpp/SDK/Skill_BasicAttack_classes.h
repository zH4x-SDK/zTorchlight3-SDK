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

// BlueprintGeneratedClass Skill_BasicAttack.Skill_BasicAttack_C
// 0x0000 (FullSize[0x0540] - InheritedSize[0x0540])
class USkill_BasicAttack_C : public USkill
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Skill_BasicAttack.Skill_BasicAttack_C");
		return ptr;
	}



	bool GetOverrideSkill(Frontiers_ESkillSlot InSkillSlot, Frontiers_ESkillSet InSkillSet, Frontiers_ESkillSlot* OutSkillSlot, Frontiers_ESkillSet* OutSkillSet, class APawn* Pawn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
