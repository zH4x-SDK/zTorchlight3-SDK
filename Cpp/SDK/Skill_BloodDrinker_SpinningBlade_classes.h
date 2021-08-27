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

// BlueprintGeneratedClass Skill_BloodDrinker_SpinningBlade.Skill_BloodDrinker_SpinningBlade_C
// 0x000C (FullSize[0x054C] - InheritedSize[0x0540])
class USkill_BloodDrinker_SpinningBlade_C : public USkill
{
public:
	float                                              BleedDuration;                                             // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckLegendary;                                            // 0x0544(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_E6PU[0x3];                                     // 0x0545(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              bleeddamage;                                               // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Skill_BloodDrinker_SpinningBlade.Skill_BloodDrinker_SpinningBlade_C");
		return ptr;
	}



	bool OnSkillEventHit01(class AActor* Actor, class AActor* TargetActor, const struct FVector& TargetLocation, int SkillInstanceId);
	struct FText GetSkillDescription(class AActor* Actor, int SkillLevel);
	void OnSkillStart(class AActor* Actor, class AActor* SkillTarget, const struct FVector& Location, float Param, int SkillInstanceId);
	void OnSkillActorEndOverlap(class AActor* Instigator, class AActor* Actor, class ASkillShape* Shape);
	void OnSkillActorOverlap(class AActor* Instigator, class AActor* Actor, class ASkillShape* Shape, bool bIsPrimaryTarget, int SkillInstanceId);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
