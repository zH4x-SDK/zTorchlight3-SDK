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

// BlueprintGeneratedClass Skill_FlamingDestroyer_ActivationSmash.Skill_FlamingDestroyer_ActivationSmash_C
// 0x0004 (FullSize[0x0544] - InheritedSize[0x0540])
class USkill_FlamingDestroyer_ActivationSmash_C : public USkill
{
public:
	float                                              BurnDuration;                                              // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Skill_FlamingDestroyer_ActivationSmash.Skill_FlamingDestroyer_ActivationSmash_C");
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
