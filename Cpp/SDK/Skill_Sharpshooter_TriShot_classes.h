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

// BlueprintGeneratedClass Skill_Sharpshooter_TriShot.Skill_Sharpshooter_TriShot_C
// 0x0000 (FullSize[0x0541] - InheritedSize[0x0541])
class USkill_Sharpshooter_TriShot_C : public USkill_Sharpshooter_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Skill_Sharpshooter_TriShot.Skill_Sharpshooter_TriShot_C");
		return ptr;
	}



	bool OnSkillEventHit01(class AActor* Actor, class AActor* TargetActor, const struct FVector& TargetLocation, int SkillInstanceId);
	void OnSkillStart(class AActor* Actor, class AActor* SkillTarget, const struct FVector& Location, float Param, int SkillInstanceId);
	void OnSkillActorOverlap(class AActor* Instigator, class AActor* Actor, class ASkillShape* Shape, bool bIsPrimaryTarget, int SkillInstanceId);
	struct FText GetSkillDescription(class AActor* Actor, int SkillLevel);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
