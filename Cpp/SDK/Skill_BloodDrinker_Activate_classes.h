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

// BlueprintGeneratedClass Skill_BloodDrinker_Activate.Skill_BloodDrinker_Activate_C
// 0x0000 (FullSize[0x0540] - InheritedSize[0x0540])
class USkill_BloodDrinker_Activate_C : public USkill
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Skill_BloodDrinker_Activate.Skill_BloodDrinker_Activate_C");
		return ptr;
	}



	void OnSkillUnequipped(class AActor* Actor);
	void OnSkillEquipped(class AActor* Actor);
	void OnSkillStart(class AActor* Actor, class AActor* SkillTarget, const struct FVector& Location, float Param, int SkillInstanceId);
	struct FText GetSkillDescription(class AActor* Actor, int SkillLevel);
	void OnSkillActorOverlap(class AActor* Instigator, class AActor* Actor, class ASkillShape* Shape, bool bIsPrimaryTarget, int SkillInstanceId);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
