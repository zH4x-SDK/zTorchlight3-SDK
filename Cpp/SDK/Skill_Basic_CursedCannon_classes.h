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

// BlueprintGeneratedClass Skill_Basic_CursedCannon.Skill_Basic_CursedCannon_C
// 0x0000 (FullSize[0x0540] - InheritedSize[0x0540])
class USkill_Basic_CursedCannon_C : public USkill
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Skill_Basic_CursedCannon.Skill_Basic_CursedCannon_C");
		return ptr;
	}



	void OnSkillActorOverlap(class AActor* Instigator, class AActor* Actor, class ASkillShape* Shape, bool bIsPrimaryTarget, int SkillInstanceId);
	void OnSkillDidDamage(class AActor* Actor, class AActor* DeliveryActor, class AActor* TargetActor, float Amount, bool bKilledTarget, bool bCritical, int SkillInstanceId);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
