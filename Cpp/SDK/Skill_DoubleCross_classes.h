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

// BlueprintGeneratedClass Skill_DoubleCross.Skill_DoubleCross_C
// 0x0000 (FullSize[0x0540] - InheritedSize[0x0540])
class USkill_DoubleCross_C : public USkill_CursedCaptain_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Skill_DoubleCross.Skill_DoubleCross_C");
		return ptr;
	}



	void OnSkillRemoved(class AActor* Actor);
	void OnSkillActorOverlap(class AActor* Instigator, class AActor* Actor, class ASkillShape* Shape, bool bIsPrimaryTarget, int SkillInstanceId);
	bool OnSkillEventHit01(class AActor* Actor, class AActor* TargetActor, const struct FVector& TargetLocation, int SkillInstanceId);
	struct FText GetSkillDescription(class AActor* Actor, int SkillLevel);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
