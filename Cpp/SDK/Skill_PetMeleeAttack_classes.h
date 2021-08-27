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

// BlueprintGeneratedClass Skill_PetMeleeAttack.Skill_PetMeleeAttack_C
// 0x0000 (FullSize[0x0540] - InheritedSize[0x0540])
class USkill_PetMeleeAttack_C : public USkill
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Skill_PetMeleeAttack.Skill_PetMeleeAttack_C");
		return ptr;
	}



	void OnSkillDidDamage(class AActor* Actor, class AActor* DeliveryActor, class AActor* TargetActor, float Amount, bool bKilledTarget, bool bCritical, int SkillInstanceId);
	struct FText GetSkillDescription(class AActor* Actor, int SkillLevel);
	bool OnSkillEventHit01(class AActor* Actor, class AActor* TargetActor, const struct FVector& TargetLocation, int SkillInstanceId);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
