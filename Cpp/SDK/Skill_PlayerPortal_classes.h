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

// BlueprintGeneratedClass Skill_PlayerPortal.Skill_PlayerPortal_C
// 0x0000 (FullSize[0x0540] - InheritedSize[0x0540])
class USkill_PlayerPortal_C : public USkill
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Skill_PlayerPortal.Skill_PlayerPortal_C");
		return ptr;
	}



	bool BlueprintCanSkillStart(class AActor* SourceActor, class AActor* TargetActor, const struct FVector& TargetLocation);
	void OnSkillStart(class AActor* Actor, class AActor* SkillTarget, const struct FVector& Location, float Param, int SkillInstanceId);
	void OnSkillStop(class AActor* Actor);
	bool OnSkillEventHit01(class AActor* Actor, class AActor* TargetActor, const struct FVector& TargetLocation, int SkillInstanceId);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
